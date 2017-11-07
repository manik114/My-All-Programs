#ifndef CREATURE_H
#define CREATURE_H
#include <iostream>
using namespace std;
class creature
{
    string name;
    pointer m_pointer;
public:
    creature(string name,const pointer& location):m_pointer(location)
    {
        this->name=name;
    }
    void move_to(int x,int y)
    {
        m_pointer.setting(x,y);
    }
    friend ostream& operator <<(ostream& ,const creature&);
};
ostream& operator <<(ostream& out,const creature& a)
{
    out<< a.name << "  "<<a.m_pointer<<endl;
    return out;
}

#endif // CREATURE_H
