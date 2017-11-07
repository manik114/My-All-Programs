#include <iostream>

using namespace std;
int n;
class node
{
public:
    int info;
    node *link;
};
node *head=NULL,*tmp,*last;

void insert(int data)
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

void tra()
{
    node *srt=head;
    while(srt!=NULL)
    {
        cout<<srt->info<<endl;
        srt=srt->link;
    }
}
node *location=NULL;
int search(int data)
{
    node *srt=head;
    while(srt!=NULL)
    {
        if(srt->info==data)
        {
            location=srt;
            break;
        }
        srt=srt->link;
    }
    if(location==NULL)
    {
        cout<< "Not Found " <<endl;
        return 0;
    }
    cout << "Found at Location " << location <<endl;
    return 0;
}

int search_sorted(int data)
{
    node *srt=head;
    while(srt!=NULL)
    {
        if(srt->info==data)
        {
            cout<<"Location " << srt<<endl;
            break;
        }
        else if(srt->info<data) srt=srt->link;
        else
        {
            cout<<"Not found" << endl;
            return 0;
        }
    }
    cout<<"Not found " <<endl;
    return 0;
}

void rev()
{
    node *srt=head,*srt2=last,*srt3;
    int tm;
    int ck=n/2;
    while(ck)
    {
        srt3=srt;
        tm=srt3->info;
        while(1)
        {
            if(srt3->link==srt2)
            {
                srt->info=srt2->info;
                srt2->info=tm;
                srt2=srt3;
                srt=srt->link;
                break;
            }
            else srt3=srt3->link;
        }
        ck--;
    }
}

int main()
{
    int item;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>item;
        insert(item);
    }
    rev();
//    cout<< "Search a number from the list "<<endl;
//    int a;cin>>a;
//    search_sorted(a);
    tra();

    return 0;
}
