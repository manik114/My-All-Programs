#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[101];
    int cnt1=0,cnt2=0;

    cin >> s;
    int d=strlen(s);

    for( int i=0;i<d;i++)
    {
        if(s[i]>='A' && s[i]<= 'Z')
        {
            cnt1++;
        }
        else if(s[i]>= 'a' && s[i]<= 'z')
            cnt2++;
    }

    if(cnt1>cnt2)
    {
        for(int i=0;i<d;i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                s[i]=s[i]-32;
            }
        }
        cout << s;
    }
    else
    {
        for(int i=0;i<d;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=s[i]+32;
            }
        }
        cout << s;
    }

    return 0;
}
