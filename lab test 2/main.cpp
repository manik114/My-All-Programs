#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,ans,power = 0;

    int total = 0,i = 0;
    cin >> n ;

    ans = (n*(n+1))/2;

    while (power < n)
    {
        power = pow(2,i);
        total = power + total ;
        i++;
    }

    ans = ans - (total*2);

    cout << ans << endl ;

    return 0;
}
