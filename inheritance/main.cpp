#include <iostream>

using namespace std;

//class A
//{
//    int a;
//public:
//    int b=0;
//    inline void read(){cout<<"Got it From A "<<b<<endl;}
//};
//class B : public virtual A
//{
//public:
//    int b=0;
//    inline void read(){cout<<"Got it From B "<<b<<endl;}
//};
//class C : virtual public B,virtual public A
//{
//public:
//    int b=0;
//    inline void read(){cout<<"Got if From C "<<b<<endl;}
//
//};

class coin
{
    int a;
public:
    coin (int b){a=b;}
    int get() const {return a;}

};
coin add (const coin &c1,const coin &c2)
    {
        return coin(c1.get()+c2.get());
    }

int main()
{
//    A objA;
//    B objB;
//    C objC;
//
//    objB.b=5;
//    objB.A::b=6;
//    objA.b=7;
//    objA.read();
//    objB.read();
//    objB.A::read();
//    objC.A::b=1;
//    objC.A::read();
//    objC.B::b=2;
//    objC.B::read();
//    objC.b=3;
//    objC.read();
    cout<< add(coin(6),coin(7)).get()<<endl;
    return 0;
}
