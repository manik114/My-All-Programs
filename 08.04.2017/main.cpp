#include <iostream>

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
    node *srt=first;
    while(srt!=NULL)
    {
        cout << srt->info<<endl;
        srt=srt->f;
    }
}
void rev()
{
    int tm;
    node *srt,*pre;
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
