#include <iostream>
#include <assert.h>
#include <vector>
#include <math.h>
#include "pointer.h"
#include "creature.h"
using namespace std;

class teacher
{
    public:
    string name;
    teacher(string name){this->name=name;}
    string getname(){return name;}
};

class department
{
public:
    teacher *obj;
    department(teacher *name=nullptr):obj(name){}
    ~department(){cout<<"Destructor of Department";}
};


auto main(void)->int
{
    teacher *obj1=new teacher("Manik");
    {
        department (obj1);
    }
    cout<<obj1->getname();
    return 0;
}
