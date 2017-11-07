#include <iostream>

using namespace std;

int main()
{
    int a[]= {4,3,5,1,9,8,2,7};
    int n=7,j=0,i,item;
    for(i=n; i>=0; i--)
    {
b:
        item=a[j];
        if(i==j) break;
        if(item<a[i]) continue;
        else
        {
            swap(a[i],item);
            j=i;
            goto a;
        }
    }
    int aa;
    for(aa=0; aa<n; aa++)
    {
a:
        item=a[j];
        if(aa==j) break;
        if(item>a[aa]) continue;
        else
        {
            swap(a[aa],item);
            j=aa;
            goto b;
        }
    }

    for(int i=0;i<8;i++) cout<<a[i]<<endl;

    return 0;
}
