from urllib.request import urlopen

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