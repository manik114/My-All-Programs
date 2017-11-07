#include <iostream>
#include <bits/stdc++.h>
using namespace std;

list <int> l;
list <int> :: iterator it;
int main()
{
    for(int i=1;i<6;i++)
        l.push_back(i);
    it=l.begin();
    it++;
    it++;

    l.insert(it,2,10);
    for(it=l.begin();it!=l.end();it++)
        cout << *it << endl;

    return 0;
}
