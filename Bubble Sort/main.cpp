#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[]={5,7,6,1,9,3};

    for(int i=0;i<5;++i)
        for(int j=i+1;j<6;++j)
    {
        if(array[i]>array[j])
            swap(array[i],array[j]);
    }
    for(int i=0;i<6;++i)
        cout<<array[i]<<endl;
    return 0;
}
