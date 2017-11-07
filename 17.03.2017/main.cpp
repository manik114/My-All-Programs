#include <iostream>

using namespace std;

int add(int a,int b)
{
    return a+b;
}
double add(int a)
{
    return a;
}
int main()
{

   // cout <<add(3,5) << endl;
    cout << add (3) << endl;

    return 0;
}
