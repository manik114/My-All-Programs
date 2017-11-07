#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

map <string,int>m;
vector <string> v;
int main()
{
    string s;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        if(m[s]<1){
            m[s]=1;
            cout<<"OK"<<endl;
        }
        else{
            m[s]+=1;
            cout<<s<<m[s]-1<<endl;
        }
    }
    m.clear();
    return 0;
}
