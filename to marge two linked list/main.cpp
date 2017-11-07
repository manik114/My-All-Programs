#include <iostream>

using namespace std;

class node;
class node2;
class node3;
void sorting2(node2 *second);
node *head = NULL,*tmp;
node2 *head2 = NULL,*tmp2;
node3 *tmp3,*head3=NULL; //All declaration ended here

class node {public:int info;node  *link;};
class node2{public:int info;node2 *link;};
class node3{public:int info;node3 *link;};

void ins(int data)
{
    node *ptr;
    ptr = new node();
    ptr -> info = data;
    ptr -> link = NULL;
    if(head == NULL)
    {
        head = ptr;
        tmp = ptr;
    }
    else
    {
        tmp -> link = ptr;
        tmp = ptr;
    }
}

void ins2(int data)
{
    node2 *ptr;
    ptr=new node2();
    ptr->info = data;
    ptr -> link = NULL;
    if(head2 == NULL)
    {
        head2 = ptr;
        tmp2= ptr;
    }
    else
    {
        tmp2 -> link = ptr;
        tmp2 = ptr;
    }
}

void sorting() // For sorting the elements in first list
{
    node *tmp,*cnt;
    tmp = head;
    while(tmp != NULL)
    {
        for(cnt = tmp -> link; cnt != NULL; cnt = cnt -> link)
        {
            if(tmp -> info > cnt -> info)
            {
                int tmp2=tmp->info;
                tmp -> info = cnt -> info;
                cnt -> info = tmp2;
            }
        }
        tmp = tmp-> link;
    }
}

void sorting2(int data) // For sorting the elements taking from second list
{
    node3 *ptr,*srt,*tmp4;
    ptr = new node3();
    ptr ->info = data;
    ptr -> link = NULL;
    srt = head3;
    while(srt != NULL)
    {
        if(ptr ->info <= head3 -> info)
        {
            ptr ->link = srt;
            head3 = ptr;
            break;
        }
        else if(ptr -> info <= srt ->info)
        {
            tmp4 ->link = ptr;
            ptr -> link = srt;
            break;
        }
        else if(srt ->link == NULL)
        {
            srt -> link = ptr;
            break;
        }
        else
        {
            tmp4 =srt;
            srt =srt ->link;
        }
    }
}

void adding(node *first)
{
    node3 *ptr;
    ptr = new node3();
    ptr -> link = NULL;
    ptr -> info = first->info;
    if(head3 == NULL)
    {
        head3 = ptr;
        tmp3=ptr;
    }
    else
    {
        tmp3 -> link = ptr;
        tmp3 = ptr;
    }
}
void travers()
{
    node3 *srt;
    srt = head3;
    while(srt!= NULL)
    {
        cout << srt ->info << endl;
        srt = srt->link;
    }
}

int main()
{
    int n,item;
    cout << "How many nodes in first linked list :" << endl;
    cin >> n;
    for(int i = 0 ; i< n; i++)
    {
        cin>> item;
        ins(item);
    }
    sorting();
    node *srt;
    srt = head;
    while(1)
    {
        adding(srt);
        if(srt->link == NULL)
            break;
        srt= srt -> link;
    }
    cout << "How many nodes in second linked list :" << endl;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> item;
        ins2(item);
    }

    node2 *srt2;
    srt2 = head2;
    while(srt2 != NULL)
    {
        sorting2(srt2->info);
        srt2 = srt2 ->link;
    }
    cout << endl << endl;
    cout << "Now printing the new linked list merging all the elements " << endl;
    travers();

    return 0;
}
