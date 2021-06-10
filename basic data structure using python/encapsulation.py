class finance:
    def __init__(self):
        self.__acno=123456 #private
        self._bal=100000  #protected
    __name="sammmmmm"     #private
    _name="Ether"         #protected

class creditcard(finance):

    def __init__(self):
        print("You are invoked the credit card module")
        print("calling proteccted member")
        finance.__init__(self)
        print("balance :",self._bal)
        print("ACC no :",self._acno) #you cant acess this since it is private
    print(finance._name)

if __name__ == '__main__':
    obj2=creditcard()
