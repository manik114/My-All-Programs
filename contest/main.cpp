#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d,cnt=1,ans1=1,ans2=0;
    char s[100];
    cin >> s;
    d=strlen(s);
    for(int i=0; i<d; i++)
    {
        if(s[i]=='A' || s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U'|| s[i]=='Y')
        {
            if(cnt>=ans1)
            {
                ans1=cnt;
            }
            cnt=1;
        }
        else
        {
            cnt++;
           // if(s[0]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U'|| s[i]=='Y')
             ans1=cnt;
           // else
        }
        if(ans1>ans2)
        {
            ans2=ans1;
        }
    }
    cout << ans2;

    return 0;
}
