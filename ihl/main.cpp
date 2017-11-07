#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long int n,j,ans,power = 0,result[100];

   long long int total = 0,i = 0;

    int t;

    cin >> t;

    for ( j = 0 ;j< t;j ++)
    {
        cin >> n ;

        ans = (n*(n+1))/2;

        while (power < n)
        {
            power = pow(2,i);
            if(power > n)
                break;
            total = power + total ;
            i++;
        }

        result[j] = ans - (total*2);

        total = 0;
        i = 0;
        power = 0;
    }

    for ( j = 0 ; j< t;j++)
    {
        cout << result[j] << endl;;
    }

    return 0;
}
