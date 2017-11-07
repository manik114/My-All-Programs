#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,j,ans = 0;
    char s[2000000];
    cin >> s;
    n=strlen(s);
    for(i=0; i<n; i++)
    {
        if(s[i]=='>')
        {
            for (j=i; j<-n; j++)
            {

                if(s[i]==s[j+1])
                {
                    ans++;
                }
                else
                {
                    ans = 0;
                    i=j+2;
                    break;
                }
            }
        }
        else
        {
            ans = 1;
            for(j=i; j>0; j--)
            {
                if(s[j]==s[i-1])
                    ans++;
                else
                {
                    ans = 0;
                    i=j+2;
                    break;
                }
            }
        }
    }

    cout << ans ;
    return 0;
}
