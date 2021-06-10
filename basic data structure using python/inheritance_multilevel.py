class name:
    def names(self):
        self.firstname=input("enter first your name : ")
        self.lastname=input("enter your last name : ")
class address(name):
    def address(self):
        self.address=input("enter your address : ")

class education(address):
    def educationdetail(self):
        self.stream=input("enter your stream : ")

class detail(education):
    def __init__(self):
        self.names()            #acessinng a function of great grand parent using grandchild object


    def printdata(self):
        print(self.__dict__)

ram=detail()
ram.printdata()                 #Accessing the  child class function
ram.address()                   #accesing grand parent function using child object
ram.printdata()

