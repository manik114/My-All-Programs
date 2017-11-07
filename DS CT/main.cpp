#include <iostream>

using namespace std;
int n,a[50];
void inslast(int data)
{
    a[n]=data;
    n++;
}
void insp(int p,int data)
{
    n++;
    for(int i=n-1; i>=0; i--)
    {
        a[i]=a[i-1];
        if(i==p-1)
        {
            a[i]=data;
            break;
        }
    }
}

void delp(int p)
{
    for(int i=0; i<n; i++)
    {
        if(i==p-1)
        {
            for(int j=p-1; j<n; j++)
                a[j]=a[j+1];
        }
    }
    --n;
}

void tra()
{
    for(int i=0; i<n; i++) cout<<a[i]<<endl;
}
int main()
{
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    int c;
    cout<<"1 for last ins 2 for at a position ins"<<endl;
    cout<<"3 for last delete 4 for a position delete"<<endl;
    cin>>c;
    if(c==1)
    {
        int a;
        cout<<"enter the element "<<endl;
        cin>>a;
        inslast(a);
        tra();
    }
    else if(c==2)
    {
        cout<<"Enter the position and data "<<endl;
        int p,a;
        cin>>p>>a;
        insp(p,a);
        tra();

    }
    else if(c==3)
    {
        n--;
        tra();
    }
    else if(c==4)
    {
        cout<<"Enter the position "<<endl;
        int p;
        cin>>p;
        delp(p);
        tra();

    }
    return 0;
}
