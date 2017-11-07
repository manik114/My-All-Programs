#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,t,s,ttl=0,tmp;
    int gin,gout;

    cin >> t;

    for(i = 1 ; i <= t; i++)
    {
        ttl = 0;
        cin >> s;
        for(int j = 0 ; j < s-1 ; j++)
        {
            scanf("%d %d",&gin,&gout);
            if (j==0)
                tmp = gin - gout;
                if(tmp > ttl)
                    ttl = tmp;
            else
            {
                tmp = tmp + gin - gout;
                if(tmp > ttl)
                    ttl = tmp;
            }
        }
    printf("case [%d]: %d\n",i,ttl);
    }
    return 0;
}
