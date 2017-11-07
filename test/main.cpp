#include <iostream>
#include <stdio.h>
#include <string>
#include<bits/stdc++.h>
using namespace std;



int main()
{
    vector <int> v;
    int y=5;
    for(int i=0;i<5;i++) v.push_back(i+1);
    auto f=[&](int i)mutable->int{cout<<i<<endl;};
    ///auto f=for_each(v.begin(),v.end(),[&](int x){cout<<x<<" "<<y++<<endl;});
    for_each(v.begin(),v.end(),f);
    f(6);
    return 0;
}
