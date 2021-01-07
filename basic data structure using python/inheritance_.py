class personaldetail:
    def __init__(self):
        print("1. calling the parent class constructor")
        self.name=input("enter your name : ")
        self.age=input("enter your age : ")
        self.address=input("enter your addresss : ")

    def family(self):
        self.father=input("enter father name : ")
        self.mother=input("enter mother name : ")

    def gender(self):
        self.gender=input("enter the gender : ")

class studentdetail(personaldetail):
    def __init__(self):
        personaldetail.__init__(self)       #this line will call the constructor of the parent class
        print("2. calling child class constructor")
        self.stream =input("enter stream : ")
        self.college=input("enter college name : ")
        print("3. calling function defined in parent class in child class")
        self.gender()       # here we are accessing the parent clasa function using child self

i=studentdetail()
print("4. calling function of the parent class using child class object ")  # the object of child class acess the function of the parent class
i.family()
print(i.__dict__)



