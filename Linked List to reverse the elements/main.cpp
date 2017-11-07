#include <iostream>
#define ll long long
#include<map>
using namespace std;

class node
{
public:
    int info;
    node *f,*b;
};
node *tmp,*first=NULL,*last;

void insert(int data)
{
    node *ptr=new node();
    ptr->info=data;
    ptr->f=NULL;
    ptr->b=NULL;
    if(first==NULL)
    {
        first=ptr;
        tmp=ptr;
    }
    else
    {
        tmp->f=ptr;
        ptr->b=tmp;
        tmp=ptr;
        last=tmp;
    }
}
void travers()
{
    node *srt;
    srt=first;
    while(1)
    {
        if(srt->f!=NULL)
        {
            cout << srt->info<<endl;
            srt=srt->f;
        }
        else
        {
            cout << srt->info<<endl;
            break;
        }
    }
}
void rev()
{
    int tm;
    node *srt,*pre,*srt2;
    srt2=last;
    while(1)
    {
        tm=first->info;
        srt=first->f;
        while(1)
        {
            if(srt==first->f)
            {
                first->info=srt->info;
                srt->info=tm;
            }
            else
            {
                pre=srt->b;
                tm=srt->info;
                srt->info=pre->info;
                pre->info=tm;
            }
            if(srt==srt2){srt2=srt->b;break;}
            srt=srt->f;
        }
        if(srt2==first)break;
    }
}
int main()
{
    int n,item;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin >>item;
        insert(item);
    }
    cout <<endl;
    cout << "Press 1 for travers revers"<<endl;
    int i;
    cin >> i;
    if(i==1)
    {
        rev();
    }
    travers();

    return 0;
}
