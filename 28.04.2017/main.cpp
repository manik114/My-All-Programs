#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
vector<int> v,v1;
int main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int item;cin>>item;v.push_back(item);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v[j]==0) {v1.push_back(abs(i-j));break;}
        }
    }
    for(int i=0;i<v1.size();i++){cout<<v1[i]<<" ";}
    return 0;
}
