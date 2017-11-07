#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    stringstream os;
os << "Hello ";
 
os.str(""); // erase the buffer
 
os << "World!";
cout << os.str();


    return 0;
}
