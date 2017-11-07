#include <iostream>
#include<map>
using namespace std;

map<string,int> m;

int main()
{
    int n;cin>>n;
    string s;
    cin>>s;
    m[s]=1;
    cout<<"NO"<<endl;
    for(int i=1;i<n;++i)
    {
        cin>>s;
        if(m[s]==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
            m[s]=1;
        }
    }
    m.clear();
    return 0;
}
