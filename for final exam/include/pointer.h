#ifndef POINTER_H
#define POINTER_H
#include <iostream>
using namespace std;
class pointer
{
    int x,y;
public:
    pointer();
    pointer(int x,int y){this->x=x;this->y=y;}
    void setting(int x,int y){this->x=x;this->y=y;}
    friend ostream& operator << (ostream& out,const pointer& a);
};

ostream& operator <<(ostream& out,const pointer& a)
{
    out<<"Position:  " << a.x<<" "<<a.y<<endl;
    return out;
}

#endif // POINTER_H
