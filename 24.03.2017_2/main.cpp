#include <bits/stdc++.h>
#define ll long long
using namespace std;

map <int ,int> m;

int main()
{
    int a,b,c,d;
    cin >>a>>b>>c>>d;
    for(ll i=0;i<100000;i++)
    {
        m[b+a*i]=1;
    }
    for(ll i=0;i<100000;i++)
    {
        if(m[d+c*i]==1)
        {
            cout << d+c*i;
            return 0;
        }
    }
    cout << "-1";
    return 0;
}
