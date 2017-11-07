#include <iostream>
#include <bits/stdc++.h>
using namespace std;
map <char,vector<int> > m;
//vector <int> v;
int main()
{
    m['a'].push_back(1);
    m['b'].push_back(2);
    map <char,vector <int> > :: iterator it = m.begin();
    for( ;it!=m.end();it++)
    {
        cout << it -> first << " ";
        cout << (*it) << endl;
    }

    return 0;
}
