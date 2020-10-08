from tkinter import messagebox
import os
# import socket
import socket
import sys
import select
#
from check_ls import Lisence

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