#include <bits/stdc++.h>
#define ll long long
using namespace std;

//vector <int> v;
//vector <int> ::iterator it;

int main()
{
    string s1;
    int n,m,c;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        s1.push_back (i+1);
    }
    cout<< s1 ;
    return 0;
    int a=0,b=s1.size(),d=b;

    for(int i=0;i<m;i++)
    {
        cin>>c;
        while(c>b-a)
        {
            s1+=s1;
            b+=d;
        }
        cout<<s1[c+a]<<" ";
        a+=c;
        //b+=d;
    }

    return 0;
}
