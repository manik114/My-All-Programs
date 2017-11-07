#include <iostream>
#include <strings.h>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    long long int n,r;
    cin >> n;
    n=n*(180/3.14);
    r=2*cos(n)*cos(n)-sqrt(3)*sin(n)+log(n/2);
    cout << r << endl;

    return 0;
}
