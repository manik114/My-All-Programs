#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
///smart pointer///
template <class T>
class smart
{
    T* m_ptr;
public:
    smart(T* m):m_ptr(m){}
    ~smart(){delete m_ptr;}
};

class sample
{
public:
    sample(){cout<<"Sample constructor executed"<<endl;}
    ~sample(){cout<<"Sample destructor executed"<<endl;}
};

int main()
{
    smart<sample> sm(new sample);
    return 0;
}
