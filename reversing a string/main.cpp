#include <iostream>
#include <strings.h>
#include <deque>
#include <stdio.h>
using namespace std;
deque <int> d;
int main()
{
    //freopen("t.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        string s,t;
        cin>>s;
        getchar();
        cin>>t;
        getchar();

        for(unsigned int i=0; i<s.length()/2; ++i) swap(s[i],s[s.length()-i-1]);
        for(unsigned int i=0; i<t.length()/2; ++i) swap(t[i],t[t.length()-i-1]);

        if(s.length()>t.length()) swap(s,t);

        for(int i=t.length()-1,j=s.length()-1; i>=0; --i)
        {
            //cout<<int(t[i])<<" "<<char(t[i]);

//        cout<<(((s[j])-'0'+(t[i])-'0'))%10<<" ";
//        cout<<((s[j])+(t[i]))/10<<" ";
            if(i==0&&j==0&&t[0]-'0'+s[0]-'0'==10)
            {
                d.push_front(1);
            }
            if(j>=0)
            {
                cout<<t[i]-'0'+s[j]-'0'<<" ";
                d.push_front(char(int(t[i]-'0'+s[j]-'0'))%10);
                t[i-1]=t[i-1]+(char(int(t[i]-'0'+s[j]-'0'))/10);
                j--;
            }
            else
            {
                d.push_front(t[i]-'0');
                cout<<t[i]-'0'<< " ";
            }
        }
        int i=d.size()-1,ck=0;
        for(auto it=d.rbegin();it!=d.rend();++it,--i)
        {
            if(ck==0)
            {
                if(*it!=0) {cout<<*it;
                ck=1;
                }
            }
            else
            {
                if(i!=0)
                {
                    cout<<*it;
                }
                else if(i==0 && *it!=0) cout<<*it;

            }
        }
        cout<<endl;
        d.clear();

    }


    // cout<<s<<" "<<t;

    return 0;
}
