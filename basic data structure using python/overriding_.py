class A:
    var="this is variable of class A"
    def __init__(self):
        self.var = "constructor variable of A"
        print("i am in constructor of class A")
class B(A):
    var="this is variable of class B"
    def __init__(self):
        self.var = "constructor variable of b"
        def display():
            print("i am in constructor of class B")
class C(B):
    var="variable of class c"
    def __init__(self):
        self.var="constructor variable of C"
        super().__init__()
        def display():
            print("I am in constructor of class C")

obj=C()
print(obj.var)

