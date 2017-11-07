#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[100002],sum=0,mn = 1000000;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

        if(arr[i]>0) sum+=arr[i];

        if(arr[i] %2!=0)
            mn = min(mn,abs(arr[i]));
    }
    if(sum %2==0) sum-=mn;
    cout<<sum;
    return 0;
}
