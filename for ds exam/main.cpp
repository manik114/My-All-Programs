#include <iostream>

using namespace std;
class node
{
public:
    int info;
    node *link;
};
node *head=NULL,*tmp,*last;
void ins(int data)
{
    node *ptr=new node();
    ptr->info=data;
    ptr->link=NULL;
    last=ptr;
    if(head==NULL)
    {
        head=ptr;
        tmp=ptr;
    }
    else
    {
        tmp->link=ptr;
        tmp=ptr;
    }
}
void print()
{
    node *srt=head;
    for(;;)
    {
        if(srt->link!=NULL)
        {
            cout<<srt->info<<endl;
            srt=srt->link;
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
    node *srt=head,*srt2=last,*t;
    int a;
    while(1)
    {
        a=srt->info;
        t=srt;
        while(1)
        {
            if(t->link==srt2)
            {
                srt->info=srt2->info;
                srt2->info=a;
                srt2=t;
                break;
            }
            else
                t=t->link;
        }
        if(srt==srt2) break;
        else if(srt->link==srt2)
        {
            swap(srt->info,srt2->info);
            break;
        }
        else
            srt=srt->link;
    }
}
int main()
{

    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        int data;
        cin>>data;
        ins(data);
    }
    print();
    rev();
    print();
    return 0;
}
