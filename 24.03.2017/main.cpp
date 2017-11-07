#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[100],dir;;
    cin >> dir;
    cin >> s;
    int l=strlen(s),i;
    char t[l+4];
    if(dir=='R')
    {
        for(i=0; s[i]!='\n'; i++)
        {
            if(s[i]=='w')
                t[i]='q';
            else if(s[i]=='e')
                t[i]='w';
            else if(s[i]=='r')
                t[i]='e';
            else if(s[i]=='t')
                t[i]='r';
            else if(s[i]=='y')
                t[i]='t';
            else if(s[i]=='u')
                t[i]='y';
            else if(s[i]=='i')
                t[i]='u';
            else if(s[i]=='o')
                t[i]='i';
            else if(s[i]=='p')
                t[i]='o';
            else if(s[i]=='s')
                t[i]='a';
            else if(s[i]=='d')
                t[i]='s';
            else if(s[i]=='f')
                t[i]='d';
            else if(s[i]=='g')
                t[i]='f';
            else if(s[i]=='h')
                t[i]='g';
            else if(s[i]=='j')
                t[i]='h';
            else if(s[i]=='k')
                t[i]='j';
            else if(s[i]=='l')
                t[i]='k';
            else if(s[i]==';')
                t[i]='l';
            else if(s[i]=='x')
                t[i]='z';
            else if(s[i]=='c')
                t[i]='x';
            else if(s[i]=='v')
                t[i]='c';
            else if(s[i]=='b')
                t[i]='v';
            else if(s[i]=='n')
                t[i]='b';
            else if(s[i]=='m')
                t[i]='n';
            else if(s[i]==',')
                t[i]='m';
            else if(s[i]=='.')
                t[i]=',';
            else if(s[i]=='/')
                t[i]='.';
        }
        t[i]='\n';
    }
    else
    {
        for(i=0;s[i]!='\n';i++)
        {
            if(s[i]=='q')
                t[i]='w';
            else if(s[i]=='w')
                t[i]='e';
            else if(s[i]=='e')
                t[i]='r';
            else if(s[i]=='r')
                t[i]='t';
            else if(s[i]=='t')
                t[i]='y';
            else if(s[i]=='y')
                t[i]='u';
            else if(s[i]=='u')
                t[i]='i';
            else if(s[i]=='i')
                t[i]='o';
            else if(s[i]=='o')
                t[i]='p';
            else if(s[i]=='a')
                t[i]='s';
            else if(s[i]=='s')
                t[i]='d';
            else if(s[i]=='d')
                t[i]='f';
            else if(s[i]=='f')
                t[i]='g';
            else if(s[i]=='g')
                t[i]='h';
            else if(s[i]=='h')
                t[i]='j';
            else if(s[i]=='j')
                t[i]='k';
            else if(s[i]=='k')
                t[i]='l';
            else if(s[i]=='l')
                t[i]=';';
            else if(s[i]=='z')
                t[i]='x';
            else if(s[i]=='x')
                t[i]='c';
            else if(s[i]=='c')
                t[i]='v';
            else if(s[i]=='v')
                t[i]='b';
            else if(s[i]=='b')
                t[i]='n';
            else if(s[i]=='n')
                t[i]='m';
            else if(s[i]=='m')
                t[i]=',';
            else if(s[i]==',')
                t[i]='.';
            else if(s[i]=='.')
                t[i]='/';
        }
        t[i]='\n';
    }
    for(i=0;t[i]!='\n';i++)
    {
        cout << t[i];
    }
    return 0;
}
