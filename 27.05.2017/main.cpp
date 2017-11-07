#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    //freopen("a.txt","r",stdin);
	ll a,b;cin>>a>>b;
	for(ll i=1;i<=1000000000;i++)
	{
	    if(i%2!=0)
        {
            a-=i;
            if(b<i+1)
            {
                cout<<"Valera"<<endl;
                break;
            }
        }
        else
        {
            b-=i;
            if(a<i+1)
            {
                cout<<"Vladik"<<endl;
                break;
            }
        }
	}


	return 0;

}
