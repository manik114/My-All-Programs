#include <iostream>

using namespace std;

class sample
{
    int x[10];
public:
    int& operator [](int a)
    {
        return x[a];
    }

};


int main()
{
    sample obj;
    obj[2]=3;
    cout<<obj[2];


    return 0;
}
