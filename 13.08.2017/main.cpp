#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
///vector<int> v;
bool no_string(string s)
{
    int ck=0;
    for(unsigned i=0; i<s.size(); ++i)
    {
        if(i>0)
        {
            if((s[i]=='A'&&s[i+1]!='B'&&s[i-1]!='B')||(s[i]=='B'&&s[i+1]!='A'&&s[i-1]!='A'))
            {
                ck=1;
            }
            else
                ck=0;
        }
        else
        {
            if((s[i]=='A'&&s[i+1]!='B')||(s[i]=='B'&&s[i+1]!='A'))
            {
                ck=1;
            }
            else
                ck=0;
        }
    }
    if(ck==0) return false;
    else return true;
}
int main()
{
    string s;
    cin>>s;
    if(no_string(s))
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(unsigned i=0; i<s.size(); ++i)
    {
        if(s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='A')
        {
            cout<<"NO"<<endl;
            return 0;
        }
        if(s[i]=='B'&&s[i+1]=='A'&&s[i+2]=='B')
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
