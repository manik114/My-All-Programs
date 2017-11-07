#include <iostream>

using namespace std;

class A
{
public:
    virtual void show()=0;
};

class B:public A
{
public:
    void show()
    {
        cout<<"B called"<<endl;
    }
};
class D:public B
{
public:
    int d;
    void show()
    {
        cout<<"D called"<<endl;
    }
};

int main()
{
    A* a[2];
    B b;
    D d;
    a[0]=&b;
    a[1]=&d;
    a[0]->show();
    a[1]->show();
    return 0;
}
