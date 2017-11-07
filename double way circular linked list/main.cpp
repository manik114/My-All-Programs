#include <iostream>

using namespace std;

class node
{
public:
    int info;
    node *f,*b;
};
node *tmp,*last,*first=NULL;

void ins(int data)
{
    node *ptr=new node();
    ptr->info=data;
    last=ptr;
    if(first==NULL)
    {
        first=ptr;
        first->f=first;
        first->b=last;
        tmp=first;
    }
    else
    {
        tmp->f=ptr;
        ptr->f=first;
        ptr->b=tmp;
        tmp=ptr;
    }
}
void tra()
{
    node *srt=first;
    while(1)
    {
        if(srt->f!=first)
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

int main()
{
    int n,item;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>item;
        ins(item);
    }
    tra();
    return 0;
}
