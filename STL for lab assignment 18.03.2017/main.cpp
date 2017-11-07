#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<long long int,long long int> m;

int main()
{
    long long int jack,jill,item,ans=0;

    while(cin >> jack >> jill)
    {ans=0;
        if(jack==0 && jill==0)
            return 0;

        for(long long int i=0; i<jack; i++)
        {
            cin>>item;
            m[item]=1;
        }

        for(long long int i=0; i<jill; i++)
        {
            cin>>item;
            if(m[item]==1)
                ans++;
        }

        m.clear();
        cout << ans <<endl;
    }
    return 0;
}
