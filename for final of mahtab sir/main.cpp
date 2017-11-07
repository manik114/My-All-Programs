#include <iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<deque>
using namespace std;
class dog
{
public:
    void bark()
    {
        cout<<"I don't have a name"<<endl;
    }
};
class ydog:public dog
{
    string name;
public:
    ydog(string m):name(m){}
    void bark(){cout<<"I have a name, is : "<<name<<endl;}
};
int main()
{
    deque<dog*> d;
    ydog y("Gunner");
    d.push_front(&y);
    d[4]->bark();

    return 0;
}
