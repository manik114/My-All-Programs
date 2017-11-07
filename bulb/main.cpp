#include <iostream>
#include<math.h>

using namespace std;
int main()
{
    long long int a,d, n;
    while(cin >> n !=0)
    {
        if(n==0)
        break;
        a=sqrt(n);
        d=a*a;
        if(d==n)
        cout <<"yes\n";
        else
        cout <<"no\n";
    }
    return 0;
}
