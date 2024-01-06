class A:
    def fun(self):
        print("hello")
    
    def fun1(self):
        self.fun()

class B(A):
    def fun(self):
        print("Yes")

a = A()
a.fun1()