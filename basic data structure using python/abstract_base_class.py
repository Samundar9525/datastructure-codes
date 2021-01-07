from abc import ABC,abstractmethod
class shape(ABC):
    @abstractmethod
    def inputside(self):
        self.a=int(input("Enter the side"))
        self.b=int(input("Enter the side"))

class rectangle(shape):
    def inputside(self):
        self.a = int(input("enter the side : "))
        self.b = int(input("Enter the side"))
    def display(self):
        print("the area of rectangle : ",self.a*self.b)


class square(shape):        #here we can't mention the inputside function of abstract base class
    def __init__(self):
        def dispaly(self):
            print("the area of square : ")

re=rectangle()
re.inputside()
re.display()
sq=square()


