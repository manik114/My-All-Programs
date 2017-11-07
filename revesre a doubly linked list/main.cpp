#include <iostream>

using namespace std;

class node
{
public:
    int info;
    node *f,*b;
};
node *first=NULL,*last,*tmp;
void ins(int data)
{
    node *ptr=new node();
    ptr->info=data;
    ptr->f=NULL;
    ptr->b=NULL;
    last=ptr;
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
    }
}

void trave()
{
    node *srt;
    for(srt=first;;)
    {
        if(srt->f!=NULL)
        {
            cout<<srt->info<<endl;
            srt=srt->f;
        }
        else
        {
            cout<<srt->info<<endl;
            break;
        }
    }
}
void rev()
{
    node *srt1=first,*srt2=last;
    int t;
    while(1)
    {
        t=srt1->info;
        srt1->info=srt2->info;
        srt2->info=t;
        if((srt1==srt2)||(srt1->f==srt2)) break;
        srt1=srt1->f;
        srt2=srt2->b;
    }
}
int main()
{

    int item;
    for(int i=0;i<5;++i)
    {
        cin>>item;
        ins(item);
    }
    trave();
    cout<<endl<<endl<<endl;
    rev();
    trave();
    return 0;
}
