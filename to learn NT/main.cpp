#include <bits/stdc++.h>
#define ll long long
#include <map>
using namespace std;
vector <int> v1;
vector <int> v2;
map < int,int > mm;
int main()
{
    int n,m,item,ans=0,nh=0,mh=0;
    int d=1;
    int ck=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>item;
        if(item>nh)nh=item;
        v1.push_back(item);
    }
    for(int i=0;i<m;i++)
    {
        cin>>item;
        if(item>mh) mh=item;
        v2.push_back(item);
    }
    while(1)
    {
        for(int i=0;i<n;i++)
        {
            if(d%v1[i]==0)
                ck=1;
            else {ck=0;break;}
        }
        if(ck==1)
        {
            mm[d]=1;
        }
        d++;
        if(d>nh) break;
    }
    d=1;
    while(1)
    {
        for(int i=0;i<m;i++)
        {
            if(v2[i]%d==0) ck=1;
            else {ck=0;break;}
        }
        if(ck==1)
            if(mm[d]==1) ans++;
        d++;
        if(d>mh) break;
    }
    cout<<ans<<endl;
    return 0;
}
