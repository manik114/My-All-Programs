#include <bits/stdc++.h>

using namespace std;

int main ()
{
   int i,t,n[10000],j;

   cin >> t;

   for(i = 0; i < t ;i++)
   {
       cin >> n[i];
   }

   for(i = 0 ; i < t; i++)
   {
       j=0;
       while(j <= n[i])
        {
            printf("%d ",j);
            j++;
        }
        printf("\n");
    }
    return 0;
}
