#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> v;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll item,ans=0;
    for(ll i=0; i<n; i++)
    {
        cin>>item;
        v.push_back(item);
    }
    sort(v.begin(),v.end());
    for(ll i=1; i<n; i++)
    {
        if((v[i]-v[0])%k==0)
        {
            ll a=v[i]-v[0];
            ll b=a/k;
            ans+=b;
        }
        else
        {
            ans=-1;
            break;
        }
    }
    cout<<ans;
    return 0;
}
