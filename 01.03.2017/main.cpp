#include <iostream>

using namespace std;

int main()
{
    int n;
    long long int a, d[1001];
    cin >> n >> a;

    for(int i=0; i<n; i++)
    {
        cin >> d[i];
    }

    for(int i=1; i<n-1; i++)
    {
        for(int j=0; j<n; j++)
        {
            int t;

            if(d[i]>d[j])
            {
                t=d[i];
                d[i]=d[j];
                d[j]=t;
            }
        }
    }
    d[n]=a;

    int i=0,ans=0;

    while(i<=n+1)
    {
        int t;

        t=d[i+1]-d[i];

        if(t>ans)
            ans=t;

        i++;
    }

    cout << ans ;

    return 0;
}
