from tkinter import ttk, Tk, Frame, Canvas, Label, Button, messagebox, YES, BOTH, W
from tkinter.ttk import Treeview
import tkinter.font as font
import CtSocket
from check_ls import Lisence
import threading, sys

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
        x = CtSocket.SetupSocket(self.MyIqHere)
        x.start_socket(self.account, self.expired_time) 
       
    def stop_app(self):
        CtSocket.SetupSocket(self.MyIqHere).close_socket()
