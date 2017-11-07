#include <iostream>

using namespace std;

class node
{
public:
    int info;
    node *f,*b;
};
node *first=NULL,*tmp,*last;
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
        ptr->b=tmp;
        tmp->f=ptr;
        tmp=ptr;
    }
}

void travers()
{
    node *srt=first;
    while(srt!=NULL)
    {
        cout<<srt->info<<endl;
        srt=srt->f;
    }
}

void reverse()
{
    node *srt=first,*pre;
    int tm;
    while(last!=first)
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
            if(srt==last)
            {
                last=srt->b;
                break;
            }
            srt=srt->f;
        }
    }
}

int main()
{
    int n,item;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>item;
        ins(item);
    }
    travers();
    cout<<endl;
    reverse();
    travers();
    return 0;
}
