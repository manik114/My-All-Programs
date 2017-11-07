#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector <ll> v;

ll bin(ll data,ll n)
{
    ll mid=n/2;
    ll h=n-1,l=0;
    while(1)
    {
        if(v[mid]<data)
        {
            h=mid;
            mid=(h-l)/2;
            if(mid==l)
            {
                int a=0;
                return a;
            }
            else if(v[mid]==data)
            {
                int a=1;
                return a;
            }
        }
        else if(v[mid]>data)
        {
            l=mid;
            mid=(h-l)/2;
            if(mid==h)
            {
                int a=0;
                return a;
            }
            else if(v[mid]==data)
            {
                int a=1;
                return a;
            }
        }
        else
        {
            int a=1;
            return a;
            break;
        }
    }
    return 0;
}

int main()
{

    ll n,b,ans=0;
    cin >> n;
    for(ll i=0; i<n; i++)
    {
        cin >> b;
        v.push_back(b);
    }
    sort(v.rbegin(),v.rend());

    ll t=v[0]-v[n-1];
    for(ll i=0; i<n-1; i++)
    {
        int a=bin(v[i]-t,n);
        if(a==1)
            ans++;
    }
    return 0;
}
