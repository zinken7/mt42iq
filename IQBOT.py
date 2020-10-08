# import api
from iqoptionapi.stable_api import IQ_Option
# import gui
from tkinter import ttk, Tk, Frame, Canvas, Label, Entry, Checkbutton, Button, IntVar, messagebox, YES, BOTH, END, W
from tkinter.ttk import Treeview
import tkinter.font as font
#import other
from urllib.request import urlopen
import os, sys, threading, time, socket, select
# import lisence
import gspread
from oauth2client.service_account import ServiceAccountCredentials

# Main
class MainWindow:
    def __init__(self):
        self.cnn_connect()
           
        # Gui
        self.win = Tk()
        self.win.iconbitmap('py.ico')
        self.canvas = Canvas(self.win, width =500, height=200, bg='white')
        self.canvas.pack(expand=YES, fill=BOTH)
        #show in mid
        width = self.win.winfo_screenwidth()
        height = self.win.winfo_screenheight()
        x = int(width/2-500/2)
        y = int(height/2-300/2)
        strmid = '500x200+'+str(x)+'+'+str(y)
        self.win.geometry(strmid)
        #lock sesize
        self.win.resizable(width=False, height=False)
        self.win.title("   IQ OPTION LOGIN")
        
        # Frame
        self.frame = Frame(self.win, width=500, height=200)
        self.frame.place(x=0, y =0)
        
        Label(self.win, text="Email(*)", width=9).place(x=10, y=25)
        Label(self.win, text="Password(*)", width=12).place(x=10, y=70)
        Label(self.win, text="Key(*)", width=8).place(x=10, y=115)
        self.email = Entry(self.win, bd=2, width=50)
        self.email.place(x=130, y=25)
        self.password = Entry(self.win, show ="•", bd=2, width=50)
        self.password.place(x=130, y=70)
        self.serial = Entry(self.win, bd=2, width=50)
        self.serial.place(x=130, y=115)
        self.real = IntVar()
        Checkbutton(self.win, text = "Real Account", variable=self.real).place(x = 150, y= 155)
        Button(self.win, text="Submit", width=20, fg='white', bg='green',  command=self.login_verify).place(x=255, y=155)
        self.set_val()
        self.win.mainloop()

    def cnn_connect(self):
        self.thread1 = threading.Thread(target=self.cnn_data)
        #self.thread1.setDaemon(True)
        self.thread1.start()

    # Connect to database
    def cnn_data(self):
        # Request
        scope = ["https://spreadsheets.google.com/feeds",
         "https://www.googleapis.com/auth/drive"]

        creds = ServiceAccountCredentials.from_json_keyfile_name("creds.json", scope)
        client = gspread.authorize(creds)
        self.worksheet = client.open("lis_mt2iq").sheet1

    # check login
    def check_login(self, iq_user_name, iq_password):
        self.iq_user_name = iq_user_name
        self.iq_password = iq_password
        try:
            self.MyIqHere = IQ_Option(self.iq_user_name, self.iq_password)
            self.MyIqHere.set_max_reconnect(1)
            return self.MyIqHere.check_connect()
        except:
            False

    # check mode
    def check_mode_trade(self, real):
        self.real = real
        if self.real  == 1:
            self.MyIqHere.change_balance("REAL")
        else:
            self.MyIqHere.change_balance("PRACTICE")    

    # verify login
    def login_verify(self):
        if self.email.get().find("@") < 0:
            messagebox.askretrycancel("Warning", self.email.get() + " is not a valid email address!")
        elif len(self.password.get()) < 1:
            messagebox.askretrycancel("Warning", "Password can't be blank")
        else:
            try:
                if self.check_login(self.email.get(), self.password.get()):
                    if self.info():
                        if Lisence(self.account, self.expired_time).check_exp():
                            self.check_mode_trade(self.real.get())
                            self.save_val()
                            self.win.destroy()
                            DashboardWindow(self.MyIqHere, self.named, self.account, self.expired_time)
                        else:
                            messagebox.showwarning("Warning", "=!!!= OUT OF DATE =!!!=")
                    else:
                        messagebox.showwarning("Warning", "=!!!= WRONG KEY =!!!=")
                else:
                    messagebox.showwarning("Warning", "=!!!= WRONG EMAIL OR PASSWORD =!!!=")
                    os.execv(sys.executable, ['python'] + sys.argv)
            except:
                messagebox.askretrycancel("Warning", "Login Fail")

    def info(self):
        try:
            cell = self.worksheet.find(self.serial.get())
            self.named = self.worksheet.cell(cell.row, 2).value
            self.account = self.worksheet.cell(cell.row, 3).value
            self.expired_time = self.worksheet.cell(cell.row, 5).value
            return True
        except:
            return False
    
    def set_val(self):
        try:
            with open('lis.txt', 'r') as file:
                sdata = eval(file.read())
                if len(sdata) > 0:
                    self.email.delete(0,END)
                    self.serial.delete(0,END)
                    self.email.insert(0,sdata[0])
                    self.serial.insert(0,sdata[1])
        except:
            pass
    def save_val(self):
        data = []
        data.append(self.email.get())
        data.append(self.serial.get())
        with open('lis.txt', 'w+') as file:
            file.write(str(data))

#Dashboard
class DashboardWindow:
    #GUI
    def __init__(self, IQOPTION, name, account, exp):
        self.MyIqHere = IQOPTION
        self.name = name
        self.account = account
        self.expired_time = exp
        self.balance = self.MyIqHere.get_balance()
        self.equity = self.balance
        self.info_col = []
        self.pair = ['AUDJPY', 'GBPCAD', 'USDILS', 'USDRUB', 'CADCHF', 'NZDCHF', 'GBPJPY',
        'BGNRON', 'NZDJPY', 'SGDJPY', 'USDCHF', 'USDCNH', 'HKDJPY', 'XPDUSD', 
        'EURMXN', 'NZDCAD', 'CHFBGN', 'EMCUSD', 'EURTRY', 'GBPCZK', 'EURRON', 
        'XPTUSD', 'XAGEUR', 'XAUEUR', 'EURCZK', 'CHFRON', 'NZDUSD', 'EURNOK', 
        'USDRON', 'GBPCHF', 'XBRUSD', 'AUDCHF', 'EURHKD', 'USDBGN', 'GBPPLN', 
        'EURNZD', 'XTIUSD', 'GBPDKK', 'XAUAUD', 'SEKJPY', 'EURUSD', 'EURCHF', 
        'NMCUSD', 'USDNOK', 'EURPLN', 'GBPAUD', 'GBPSGD', 'GBPUSD', 'CADJPY', 
        'EOSUSD', 'DSHUSD', 'USDSEK', 'USDDKK', 'USDCAD', 'GBPSEK', 'CHFSGD', 
        'GBPNOK', 'XAUUSD', 'USDHKD', 'NOKJPY', 'BCHUSD', 'EURSEK', 'EURRUB', 
        'USDSGD', 'AUDUSD', 'BTCUSD', 'EURCAD', 'AUDCAD', 'GBPHKD', 'SGDHKD', 
        'EURDKK', 'LTCUSD', 'USDTRY', 'GBPHUF', 'USDMXN', 'AUS200', 'XNGUSD', 
        'EURILS', 'ETHUSD', 'EURZAR', 'EURSGD', 'GBPNZD', 'USDJPY', 'USDHUF', 
        'GBPBGN', 'GBPRON', 'GBPZAR', 'PPCUSD', 'XAGUSD', 'CHFTRY', 'AUDNZD', 
        'NOKSEK', 'USDPLN', 'TRYBGN', 'AUDSGD', 'USDTHB', 'EURJPY', 'EURAUD', 
        'TRYRON', 'EURGBP', 'TRYJPY', 'CHFJPY', 'USDCZK', 'XRPUSD', 'GBPTRY', 
        'USDZAR', 'US2000', 'EURHUF']
        self.create_gui()
        self.Refresher()
        self.run_gui()

    def create_gui(self):
        self.win = Tk()
        self.win.iconbitmap('py.ico')
        self.canvas = Canvas(self.win, width =800, height=400, bg='white')
        self.canvas.pack(expand=YES, fill=BOTH)
        
        #show in mid
        width = self.win.winfo_screenwidth()
        height = self.win.winfo_screenheight()
        x = int(width/2-800/2)
        y = int(height/2-400/2)
        strmid = '800x400+'+str(x)+'+'+str(y)
        self.win.geometry(strmid)

        #lock sesize
        self.win.resizable(width=False, height=False)
        self.win.title("   IQ OPTION")
        self.frame1 = Frame(self.win, width=500, height=400)
        self.pair_info(self.frame1, 0, 0)
        self.pair_info(self.frame1, 250, 15)
        self.frame2 = Frame(self.win, width=300, height=250)
        #Label
        info_w = 20
        Label(self.frame2, text="Balance:      "+str(self.balance), font=('', 11,''), anchor=W, width=info_w).place(x=35, y=35)
        self.xequity = Label(self.frame2, text="Equity:         "+str(self.equity), font=('', 11,''), anchor=W, width=info_w)
        self.xequity.place(x=35, y=65)
        #Info
        Label(self.frame2, text="Full Name:    "+self.name, font=('', 11,''), anchor=W, width=info_w).place(x=35, y=125)
        Label(self.frame2, text="Account:       "+self.account, font=('', 11,''), anchor=W, width=info_w).place(x=35, y=155)
        Label(self.frame2, text="Expiration:    "+self.expired_time, font=('', 11,''), anchor=W, width=info_w).place(x=35, y=185)

        self.canvas.create_window(0,0,window=self.frame1, anchor='nw')
        self.canvas.create_window(500,0,window=self.frame2, anchor='nw')
        #Btn
        myFont = font.Font(family='Helvetica', size=10)
        self.btn1 = Button(self.win, text="Start", fg='white', bg='royalblue', bd=1, command=self.start_app)
        self.btn1['font'] = myFont
        self.canvas.create_window(500,250,window=self.btn1, anchor='nw', width=300, height=75)
        self.btn2 = Button(self.win, text="Stop", fg='white', bg='red', bd=1, command=self.stop_app)
        self.btn2['font'] = myFont
        self.canvas.create_window(500,325,window=self.btn2, anchor='nw', width=300, height=75)

    def run_gui(self):    
        self.win.mainloop()

    def Refresher(self):
        # Fresh equity
        self.equity = self.MyIqHere.get_balance()
        self.xequity.configure(text="Equity:         "+str(self.equity))
        # Fresh Payout
        for i in self.info_col:
            x = i.get_children()
            for item in x:
                i.delete(item)
        self.refilled(self.info_col[0], 0)
        self.refilled(self.info_col[1], 15)
        self.lise()
        self.win.after(5000, self.Refresher)

    def lise(self):
        if not Lisence(self.account, self.expired_time).check_exp():
            messagebox.showwarning("Warning", "=!!!= OUT OF DATE =!!!=")
            sys.exit()

    def refilled(self, col , j):
        for val in self.board_info()[j:j+15]:
            col.insert('',index=0, text=val[0], values=(val[1], val[2]))

    def pair_info(self, frame, xposition, j):
        self.frame = frame
        self.xposition = xposition

        style = ttk.Style(frame)
        style.configure('Treeview', rowheight=25)

        self.tr = Treeview(self.frame, height =15, columns=('A','B'), selectmode="none")
        self.tr.bind('<Button-1>', lambda event: self.handle_click(self.tr, event))
        # heading key + text
        self.tr.heading('#0', text='Asset')
        self.tr.column('#0', minwidth=0, width=100, anchor='center', stretch=False)
        self.tr.heading('#1', text='5 Mins')
        self.tr.column('#1', minwidth=0, width=75, anchor='center', stretch=False)
        self.tr.heading('#2', text='15 Mins')
        self.tr.column('#2', minwidth=0, width=75, anchor='center', stretch=False)

        pair = self.board_info()
        for val in pair[j:j+15]:
            self.tr.insert('',index=0, text=val[0], values=(val[1], val[2]))
        self.tr.place(x=self.xposition,y=0)

        self.info_col.append(self.tr)

    def board_info(self):
        OpenProfit = self.MyIqHere.get_all_profit()
        j=1
        pair_info = []
        for val in self.pair:
            xturbo = OpenProfit[val]["turbo"]
            xbinary = OpenProfit[val]["binary"]
            if xturbo == {} and xbinary == {}:
                continue
            if xturbo == {}:
                xturbo = 0
            ims = []
            ims.append(val)
            ims.append(xturbo)
            ims.append(xbinary)
            pair_info.append(ims)
            j+=1

        pair_info = sorted(pair_info, key=lambda perc: perc[1])

        for val in pair_info:
            if val[1] == 0:
                val[1] = 'None'
            else:
                val[1] = str(int(val[1]*100)) + ' %'
            if val[2] == {}:
                val[2] = 'None'
            else:
                val[2] = str(int(val[2]*100)) + ' %'
                
        return(pair_info)

    def handle_click(self, w, event):
        if w.identify_region(event.x, event.y) == "separator":
            return "break"

    def start_app(self):
        thread2 = threading.Thread(target=self.open_sock)
        thread2.setDaemon(True)
        thread2.start()

    def open_sock(self):
        #Send to IQOption
        x = SetupSocket(self.MyIqHere)
        x.start_socket(self.account, self.expired_time) 
       
    def stop_app(self):
        SetupSocket(self.MyIqHere).close_socket()

# Socket

class SetupSocket:
    def __init__(self, IQOPTION):
        self.MyIqHere = IQOPTION
        self.host = ""
        self.port = 37389

        self.server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.server_socket.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)

    # Start Socket
    def start_socket(self, account, expired_time):
        self.account = account
        self.expired_time = expired_time
        try:
            self.server_socket.bind((self.host, self.port))
            self.server_socket.listen()
            print("listening")
            self.sockets_list = [self.server_socket]
            self.clients = {}

            while True:
                read_sockets, _, exception_sockets = select.select(self.sockets_list, [], self.sockets_list)
                # Iterate over notified sockets
                for notified_socket in read_sockets:
                    client_socket, _ = self.server_socket.accept()
                    user = self.receive_message(client_socket)
                    if user is False:
                        continue
                    self.sockets_list.append(client_socket)
                    self.clients[client_socket] = user
                    #print(user)
                    #print(time.strftime("%H:%M:%S", time.localtime())) 
                    # Enter
                    if user.find("*") != -1:
                        if not Lisence(self.account, self.expired_time).check_acc(user[user.find("*")+1:user.find("#")]):
                            messagebox.showwarning("Warning", "=!!!= WRONG MT4 ACCOUNT =!!!=")
                            os.execv(sys.executable, ['python'] + sys.argv)
                    else:
                        self.send_to_iq(user)

                for notified_socket in exception_sockets:
                    # Remove from list for socket.socket()
                    self.sockets_list.remove(notified_socket)
                    # Remove from our list of users
                    del self.clients[notified_socket]                    
        except:
            messagebox.showwarning("Warning", "=!!!= You were started before =!!!=")
            sys.exit()

    # Close Socket
    def close_socket(self):
        self.server_socket.close()
        print('quit')

    def send_to_iq(self, user_mes):
        # Prepare
        self.xsymbol = user_mes[user_mes.find("(")+1:user_mes.find("(")+7]
        self.xmode = user_mes[user_mes.find("(")+7]
        self.xtime = user_mes[user_mes.find("(")+8:user_mes.find(",")]
        self.xmoney = user_mes[user_mes.find(",")+1:user_mes.find(")")]
        # Send
        if int(self.xmode) == 1:
            mode_action = "call"
        elif int(self.xmode) == 2:
            mode_action = "put"
        time = int(self.xtime) + 1
        xmoney = float(self.xmoney)    
        so_buy = self.MyIqHere.buy(xmoney, self.xsymbol, mode_action, time)
        if not so_buy[0]:
            if not self.MyIqHere.check_connect():
                try:
                    self.MyIqHere.connect()
                except:
                    messagebox.showwarning("Warning", "Disconnect from IqOption!")
                    os.execv(sys.executable, ['python'] + sys.argv)    

    # Handles message receiving
    def receive_message(self, client_socket):
        self.client_socket = client_socket
        try:
            rdata = self.client_socket.recv(1024)
            if not rdata:
                return False
            rdata = rdata.decode('UTF-8')
            rdata = rdata.replace("\n", "")
            return rdata
        except:
            return False       

# Lisence
class Lisence:
    def __init__(self, account, expired_time):
        self.expired_time = expired_time
        self.account_number = account
    # check exp
    def check_exp(self):
        try:
            get_date = urlopen('http://just-the-time.appspot.com/?f=%Y-%m-%d')
            get_date = get_date.read().strip().decode('UTF-8')
            if get_date < self.expired_time:
                return True 
            else:
                return False
        except:
            return False
    def check_acc(self, acc):
        self.acc = acc
        if self.acc != self.account_number:
            return False
        else:
            return True

if __name__ =='__main__':
    MainWindow()