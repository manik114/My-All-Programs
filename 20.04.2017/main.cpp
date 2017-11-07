#include <bits/stdc++.h>
#define ll long long
using namespace std;
deque <char> q;
int main()
{
    int c=0;
    string s;cin>>s;
    if(s.size()==1){cout<<s;return 0;}
    int ck=0,a=0;
    for(unsigned i=0;i<s.size();i++)a+=(s[i]-'0');
    q.push_front('9');
    for(unsigned i=s.size()-2;i>0;i--)
    {
        if(s[i]!='9') q.push_front('9');
        else if(s[i]=='9'&&c==0) {q.push_front('8');c=1;}
        else q.push_front('9');
    }
    if(c==0) {if(s[0]!='1') q.push_front(s[0]-1);}
    else
    {
        if(s[0]!='1') q.push_front(s[0]);
    }

    for(unsigned i=0;i<q.size();i++) {ck+=q[i]-'0';}
   // cout<<ck<<endl;
    if(ck>a)
        for(unsigned i=0;i<q.size();i++) cout<<q[i];

    else
        cout<<s;
    return 0;
}
