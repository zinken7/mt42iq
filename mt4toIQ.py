# import api
from iqoptionapi.stable_api import IQ_Option
# import part
from dashboard import DashboardWindow
from check_ls import Lisence
# import gui
from tkinter import Tk, Frame, Canvas, Label, Entry, Checkbutton, Button, IntVar, messagebox, YES, BOTH, END
import os, sys, threading, time
# import lisence
import gspread
from oauth2client.service_account import ServiceAccountCredentials

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

if __name__ =='__main__':
    MainWindow()