class detail:
    def __init__(self):
        self.name=input("enter your name : ")
        self.age=input("enter your age : ")
        self.address=input("enter your address : ")
# the below classes have same parent that is detail
class student(detail):
    def printstuddent(self):
        print("student data : ",self.__dict__)
class teacher(detail):
    def printteacher(self):
        print("teacher data : ",self.__dict__)
class employee(detail):
    def printemployee(self):
        print("employee data : ",self.__dict__)


print(" select option : \n  1.student    \n  2.teacher   \n  3.employee ")
choice=int(input("enter your choice to insert the data"))

if (choice==1):
    obj=student()
    obj.printstuddent()
elif(choice==2):
    obj = teacher()
    obj.printteacher()
elif(choice==3):
    obj = employee()
    obj.printemployee()
else:
    print("invalid choice")
