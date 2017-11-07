#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

int main()
{
    int n;cin>>n;
    int item;
    for(int i=0;i<2*n;++i)
    {
        cin>>item;
        v.push_back(item);
    }
    sort(v.begin(),v.end());

    auto diff=0;
    int first,last;


    for(int i=0;i<v.size()-1;++i)
    {
        for(int j=i+1;j<v.size();++j)
        {
            if(v[j]-v[i]>diff)
            {
                diff=v[j]-v[i];
                first=i;
                last=j;
            }
        }
    }
  cout<<first<<" "<<last<<endl;
    auto it=v.begin();
    v.erase(it+first);
    v.erase(it+last-1);
    for(int i=0;i<v.size();++i) cout<<v[i]<<endl;
//    a:
//    int i=0;
//    for(auto it=v.begin();it!=v.end()-1;++it,++i)
//    {
//        if(v[i]==v[i+1])
//        {
//            v.erase(it);
//            v.erase(it);
//            goto a;
//        }
//    }
    int ans=0;
    for(int i=0;i<v.size()-1;i+=2)
    {
        ans+=(v[i+1]-v[i]);
    }

    cout<<ans<<endl;

    return 0;
}
