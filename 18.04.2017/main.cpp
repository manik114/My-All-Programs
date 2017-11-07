#include <bits/stdc++.h>
//#define ll long long
using namespace std;
//vector <ll> v;
int main()
{
    long long a[100][100];
    int n;
    cin>>n;
    for(int i=1; i<=10; i++)a[i][0]=1;
    for(int i=1; i<=10; i++)a[0][i]=1;
    for(int i=2; i<=10; i++)
    {
        for(int j=2; j<=10; j++)
        {
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    //cout<<a[n][n];

    return 0;
}
