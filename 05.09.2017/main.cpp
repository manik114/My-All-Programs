#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
vector<int>v;
int main()
{
    int n,it;cin>>n;
    int ans=1;
    for(int i=0;i<n;++i) {cin>>it;v.push_back(it);}
    for(int i=1;i<n;++i)
    {
        if(v[i]==1) ans++;
        else if(v[i]==0&&v[i-1]==0) ans++;
    }
    cout<<ans<<endl;
    v.clear();
    return 0;
}
