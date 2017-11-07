#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int arr[100][100]={0},tmp=-1,index,arr2[100]={0};
    int n,m,ans=101,ck=-1;
    cin >> n >> m;
    for(int i=1;i<=m;i++)
    {tmp=-1;
        for(int j=1;j<=n;j++)
        {
            cin >> arr[i][j];
            if(arr[i][j]>tmp)
            {
                tmp=arr[i][j];
                index=j;
            }
        }
        arr2[index]++;
        if(arr2[index]>=ck && index <=ans)
        {
            ans=index;
            ck=ans;
        }
        ck=-1;
        if(arr2[index]>(m/2))break;
    }
    cout <<ans;
    return 0;
}
