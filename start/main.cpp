#include <iostream>

using namespace std;

int main()
{
    int a[5],n,*p;
    int i=0,sum=0;

    p=a;

    cin >> n ;

    while (i<n)
    {
        cin >> a[i] ;
        sum+=*p;
        i++;
        p++;
    }

    cout << sum << endl;


    return 0;
}
