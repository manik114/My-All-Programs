#include <iostream>
#include <vector>
#define ll long long
using namespace std;
vector <ll> v;

bool at_hole(ll a)
{
    for(ll i=0; i<v.size(); i++)
    {
        if(a==v[i]) return true;
        return false;
    }
    return false;
}

int main()
{
    int ck=0;
    ll n,m,k,item,dis;
    ll a,b,t;
    cin>>n>>m>>k;
    for(ll i=0; i<m; i++)
    {
        cin>>item;
        if(item==1)
        {
            ck=3;
        }
        v.push_back(item);
    }
    dis=1;
    for(int i=0;i<k;i++)
    {
        cin>>a>>b;
        if(at_hole(a) && ck==0)
        {
            t=a;
            ck=1;
        }
        else if(at_hole(b) && ck==0)
        {
            t=b;
            ck=2;
        }
        else if(dis==a)
        {
            dis=b;
        }
    }

    if(ck!=0 && ck!=3)
    {
        cout<<t<<endl;
        return 0;
    }
    else if(ck==3)
    {
        cout<< "1"<<endl;
        return 0;
    }
    cout<<dis<<endl;
    return 0;
}
