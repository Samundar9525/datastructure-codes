class employee:
    basic=5000
    HRA=1000
    def __init__(self):
        self.basic=employee.basic
        self.HRA=employee.HRA
    @classmethod
    def changebaisc(cls,newbasic):
        cls.basic=newbasic

ram=employee()
print("ram salary detail : ",ram.__dict__)
print(f"\t\t\t\t the basic_pay in employee class before change is {employee.basic}")

ram.changebaisc(10000)      #using object we will change the data of the class successfully

mohan=employee()
print("mohan salary detail : ",mohan.__dict__)
print(f"\t\t\t\t the basic_pay in employee class After change is {employee.basic}")