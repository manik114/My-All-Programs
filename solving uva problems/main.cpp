#include <bits/stdc++.h>
#define ll long long

using namespace std;
void removeSpaces(char *str)
{
    // To keep track of non-space character count
    int count = 0;

    // Traverse the given string. If current character
    // is not space, then place it at index 'count++'
    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i]; // here count is
                                   // incremented
    str[count] = '\0';
}
int main()
{
    int cnt=0,ck=0;
    char s[103];
    gets(s);
//    for(int i=0;i<s.size();i++)
//    {
//        if(s[i]==' ') s.erase(i,1);
//    }
    removeSpaces(s);
    for(unsigned i=0; i<strlen(s)-1; i++)
    {
        if(s[i]=='V'&&s[i+1]=='K'){cnt++;i++;}
        else if(s[i]=='K'&&s[i+1]=='K'&&ck==0){cnt++;ck=1;i++;}
        else if(s[i]=='V'&&s[i+1]=='V'&&ck==0){cnt++;ck=1;}
        else continue;
    }
    cout<<cnt<<endl;

    return 0;
}
