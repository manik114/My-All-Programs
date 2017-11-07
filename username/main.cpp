#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[101];
    int i,l,cnt=0,cnt1=0,cnt2=0,cnt3=0;

    cin >> s ;
    l=strlen(s);

    for(i=0;i<l;i++)
    {
        if(s[i]>= 'a' && s[i]<= 'z')
        {
            cnt1++;
        }

        if(i>0 && (s[i]>= 'A' && s[i]<= 'Z'))
        {
            cnt2++;
        }
        if((s[i]>= 'A' && s[i]<= 'Z'))
            cnt++;
    }

    cnt3=cnt2+1;

    if(cnt2==(l-1) && cnt3!=l && cnt!=l)
    {
        for(i=1;i<l;i++)
        {
            if(s[0]>= 'a' && s[0]<= 'z')
            {
                s[0]=s[0]-32;
            }

            s[i]=s[i]+32;
        }
        cout << s <<endl;
        return 0;
    }

    else if(cnt3!=l && cnt!=l && (s[0]>= 'A' && s[0]<= 'Z'))
    {
        cout << s << endl;
        return 0;
    }

    else if(cnt1==1 && cnt3!=l && cnt!=l)
    {
        s[0]=s[0]-32;
        cout << s << endl;
        return 0;
    }

    else if(cnt3==l && cnt!=l)
    {
        for(i=0;i<l;i++)
        {
            s[i]=s[i]+32;
        }
        cout << s << endl;
        return 0;
    }
    else if(cnt==l){
        for(i=0;i<l;i++)
        {
            s[i]=s[i]+32;
        }
        cout << s << endl;
        return 0;

    }

    cout << s << endl;
    return 0;
}
