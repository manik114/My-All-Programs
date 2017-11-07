#include <iostream>

using namespace std;

class sw
{
    int a,b;
public:
    sw(int m , int n){a=m;b=n;}
    void swapvalue()
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    void dis(){cout << a << " " << b;}
};
int main()
{
    int m,n;
    cin >> m >> n;
    sw A(m,n);
    A.swapvalue();
    A.dis();
    return 0;
}
