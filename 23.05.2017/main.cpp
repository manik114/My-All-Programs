#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class stu
{
public:
    stu (int a){cout<<a<<endl;}
    int operator () (int x)
    {
        ///cout<<x<<endl;
        return x;
    }
    void print(int x)
    {
        cout<<x;
    }
};


int main()
{
    vector<int> v;
    stu sss(6);
    for(int i=0;i<5;i++) v.push_back(i+1);
    stu a = for_each(v.begin(),v.end(),stu(6));
    a.print();

    return 0;
}
