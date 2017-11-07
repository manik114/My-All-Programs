#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> v;
map <int,int> m;
int main()
{
    int n;cin>>n;
    ll item,ans=1000000000;
    for(int i=0;i<n;i++)
    {
        cin >>item;
        v.push_back(item);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++)
    {
        if(v[i]<=0)
        {
            ll ck=v[i+1]-v[i];
            if(ck<=ans) {ans=ck;m[ans]++;}
        }
        else if(v[i]>0)
        {
            ll ck=v[i+1]-v[i];
            if(ck<=ans){ans=ck;m[ans]++;}
        }
    }
    cout <<ans <<" "<< m[ans]<<endl;



    return 0;
}
