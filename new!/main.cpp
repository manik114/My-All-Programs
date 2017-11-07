#include <iostream>

using namespace std;

string revfi(string a,string b)
{
    for(int i=0,j=a.size()-1;i<a.size()/2;++i,--j)
    {
        swap(a[i],a[j]);
    }
    for(int i=0,j=b.size()-1;i<b.size()/2;++i,--j)
    {
        swap(b[i],b[j]);
    }
    auto sia=a.size(),sib=b.size();
    string ans;
    if(sia<sib)
    {
        for(auto i=sib-1,j=sia-1;i>=0;--i)
        {
            if(i<j) {ans+=b[i];--j;}
            else {ans+=(a[i]+b[i]);}
        }
    }
    else if(sia>=sib)
    {
        for(auto i=sia-1,j=sib-1;i>=0;--i)
        {
            if(i<j) {ans+=a[i];--j;}
            else {ans+=(a[i]+b[i]);}
        }
    }
    cout<<ans;
    return ans;
}
string revlast(string s)
{
    string ans;
    for(int i=0,j=s.size()-1;i<s.size();++i,--j)
    {
        swap(s[i],s[j]);
    }
    for(int i=0;i<s.size();++i)
    {
        if(s[i]!='0')
        {
            ans+=s[i];
        }
    }
    return ans;
}
int main()
{
    int t;cin>>t;
    getchar();
    while(t--)
    {
        string s,tt;getline(cin,s);getchar();getline(cin,tt);
        auto ss=revfi(s,tt);
        cout<<revlast(ss);

    }
    return 0;
}
