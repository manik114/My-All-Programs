#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,k,sum=0;
    int i,d=0,n=0;
    cin >> k;

    for(int m=0;m<k;m++)
    {
        cin >> t;
        for(i=1;i<=t;i++,n++)
    {
        if(i==pow(2,n))
        {
            d=(-1)*i;
            sum=sum+d;

        }
        else
        {
            n=n-1;
            sum=sum+i;
        }
    }
    cout << sum << endl;

    }
    return 0;
}
