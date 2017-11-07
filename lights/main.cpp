#include <iostream>

using namespace std;

int main()
{
    int n,a,b,sum=0;

    cin >> n;

    while (n>=2)
    {
        b=n/3;
        a=n%3;
        n=a+b;
        sum=sum+b;
        if(n==2)
        {
           n++;
        }
    }
    cout << sum;


    return 0;
}
