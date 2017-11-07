#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s[55];
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    unsigned ans=0,mv=0;
    for(int i=1;i<n;i++)
    {
        while(1)
        {
            char a;
            a=s[i][0];
            s[i].erase(s[i][0]);
            s[i]+=a;
            mv++;
            ans++;
            if(s[i]==s[0]) break;
            else if(mv>s[i].size()) {cout<<"-1";return 0;}
        }
    }
    cout<< ans;
    return 0;
}
