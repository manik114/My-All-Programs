#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector <ll> v;

int main()
{
    ll a,b,re;
    cin>>a>>b;
    re=a+b;

    ll i=1,ii=1,iii=1,tre=0,l3,tb=0,l2,ta=0,l;
    while(a)
    {
        l=a%10;
        a/=10;
        if(l!=0)
        {
            ta=l*i+ta;
            i*=10;
        }
        l2=b%10;
        b/=10;
        if(l2!=0)
        {
            tb+=l2*ii;
            ii*=10;
        }
        l3=re%10;
        re/=10;
        if(l3!=0)
        {
            tre+=l3*iii;
            iii*=10;
        }
    }
    while(re)
    {

    }

    if(ta+tb==tre)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    cout << "NO" <<endl;

    return 0;
}
