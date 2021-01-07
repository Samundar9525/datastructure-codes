class name:
    def names(self):
        self.firstname = input("enter first your name : ")
        self.lastname = input("enter your last name : ")

class address:
    def addressdetail(self):
        self.address = input("enter your address : ")

class education:
    def educationdetail(self):
        self.stream = input("enter your stream : ")

class detail(name, address, education):         # acessinng a function of other class by passing the class name in the argument in baseclass
    def __init__(self):
        self.names()
        self.addressdetail()
        self.educationdetail()

    def printdata(self):
        print(self.__dict__)

ram = detail()
ram.printdata()

