#include <iostream>

using namespace std;

int main()
{
    string s="AABAABAAB";
    string t="AABA";
    int ans=0;
    int k=0;
    while(k<s.length())
    {
        for(int i=k,j=0;j<t.length();++i,++j)
        {
            if(s[i]!=t[j])
                goto a;
                //break;
        }
        ans++;
    a:
        k++;}

   cout<<ans<<endl;

    return 0;
}
