#include <iostream>
#include<map>
#include<set>
#include<memory>
#include<bits/stdc++.h>
using namespace std;

class base
{
    string name;
public:
    virtual void print(){cout<<"Base";}
};
class derived:public base
{
    string nam;
public:
    derived(string nn):nam(nn){}
    void print(){cout<<nam;}
};

auto main()->int
{
    base *objb;
    derived objd("derived");
    objb=&objd;
    objb->print();


    return 0;
}
