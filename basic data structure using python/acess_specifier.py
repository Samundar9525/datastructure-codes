class A:
    var1="this is variable of A"
    @staticmethod
    def __displayA():               #here we create a private function
        print("I am in A")
class B(A):
    var2 = "this is variable of B"

    def _displayB(self):            #here we create a protected function
        print("I am in B")
class C(B):
    var3 = "this is variable of C"

    def displayC(self):
        print("I am in C")          #here we create a public function

obj=C()
obj._A__displayA()                  #-------- Name mangling performed here------
obj._displayB()
obj.displayC()