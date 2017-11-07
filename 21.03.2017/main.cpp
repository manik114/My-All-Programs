#include <bits/stdc++.h>

using namespace std;

vector <int> v;

int main()
{
    int n,t=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int item;
        cin >> item;
        t+=item;
        v.push_back(item);
    }
    int aa=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]==v[0])
            aa=1;
        else
            aa=0;
    }
    int last = v.size();
    if(aa==1)
    {
        for(int i=0; i<n/2; i++,last--)
        {
            cout << i+1 << " " << last<<endl;
        }
        return 0;
    }

    n/=2;
    int d=t/n;

    for(unsigned int i=0; i<last && n>0; i++)
    {
        for(unsigned int j=last-1; j>0; j--)
        {
            if(v[i]+v[j]==d)
            {
                cout << i+1 << " " << j+1 << endl;
                n--;
                break;
            }
        }
    }
    v.clear();
    return 0;
}
