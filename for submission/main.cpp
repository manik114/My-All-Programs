#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ;

    cin >> n ;

    for ( int i = 1 ;i <= n ; i++ )
    {
        if(i%2 == 0)
        {
            cout << "I love " ;
        }

        if( i != 0 || i< (n-1))
            cout << " that " ;

        if ( i % 2 != 0)
            cout << "I hate " ;
    }
    cout << " it " << endl ;

    return 0;
}
