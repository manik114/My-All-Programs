#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector <ll> v;
map <ll,ll> m;
int main()
{
    ll n;
    cin>>n;
    ll item,ans=1000000000;
    for(ll i=0; i<n; i++)
    {
        cin >>item;
        v.push_back(item);
    }
    sort(v.begin(),v.end());

    for(ll i=1; i<n; i++)
    {
        if(v[i]<=0)
        {
            ll ck=v[i]-v[i-1];
            if(ck<=ans)
            {
                ans=ck;
                m[ans]++;
            }
        }
        else
        {
            ll ck=v[i]-v[i-1];
            if(ck<=ans)
            {
                ans=ck;
                m[ans]++;
            }
        }
    }
    cout << ans <<" "<< m[ans]<<endl;
    v.clear();
    m.clear();
    return 0;
}
