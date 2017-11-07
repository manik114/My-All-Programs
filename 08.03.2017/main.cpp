#include <iostream>

using namespace std;
int fun(int &a)
{
    return a;
}
int main()
{
    int i=5;
    int& r = i;
    cout << fun(i);
    return 0;
}
