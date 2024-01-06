#include <iostream>

using namespace std;

class A
{
public:
    void fun()
    {
        printf("hello");
    }

    void fun1()
    {
        fun();
    }
};

class B : public A 
{
public:
    void fun()
    {
        printf("Yes");
    }
};

int main()
{
    A a;
    a.fun1();
    return 0;
}