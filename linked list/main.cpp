#include <iostream>

using namespace std;

class node
{
public:
    int info;
    node *link;
};

node *head = NULL,*tmp;

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
void tr()
{
    node *srt;
    srt = head;
    while(srt != NULL)
    {
        cout << srt -> info << endl;
        srt = srt -> link;
    }
}

void first(int data)
{
    node *ptr;
    ptr = new node();
    ptr -> info = data;
    ptr -> link = head;
    head = ptr;
}

void last (int data)
{
    node *srt;
    srt = head;
    while(1)
    {
        if()
    }
}

int main()
{
    int n,item;
    cout << "Enter the item size : " << endl;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> item;
        ins(item);
    }

    cout << "Enter an item to add first :" << endl;
    cin >> item;
    first(item);

    cout << endl;
    tr();

    return 0;
}
