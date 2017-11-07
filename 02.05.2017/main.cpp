#include <iostream>

using namespace std;

class a
{
    int aa;
public:
    int x;
};

class b: public a
{
    int aa;
public:
    int x;
};

int main()
{
    a a1;
    b b1;
    cout<<sizeof(a1)<<endl<<sizeof(b1);
}
