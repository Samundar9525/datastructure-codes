class student:
    def __init__(self):
        self.name=input("enter name of student : ")
        self.stream=input("enter the stream : ")

    @staticmethod
    def fun1():
        print("this is static method")

    def fun2():
        print(" this is a normal method")

for i in range(1,3):
    i=student()
    i.fun1()
    i.fun2()