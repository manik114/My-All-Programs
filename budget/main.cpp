#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p,b,h,w;
    int ans,total,tk,room;
    while(scanf("%d %d %d %d",&p,&b,&h,&w)==4)
    {
        ans=500000;
        while(h--)
        {
            cin >> tk;
            for(int j=0; j<w; j++)
            {
                cin >> room;
                if(room>=p)
                {
                    total=p*tk;
                    if(total<ans)
                    {
                        ans=total;
                    }
                }
            }
        }
        if(ans<=b)
        {
            cout << ans<< "\n";
        }
        else
            cout << "stay home\n";
    }
    return 0;
}
