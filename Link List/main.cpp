#include <iostream>

using namespace std;

class node
{
public :
    int info;
    node *link;
};

node *Head = NULL;
node *tmp;

int insertion (int data)
{
    node *ptr;
    ptr = new node();
    if(Head == NULL)
    {
        ptr->info = data;
        ptr->link = NULL;
        Head = ptr;
    }
    else
    {
        ptr->info = data;
        ptr->link = NULL;
        tmp->link = ptr;
        tmp = ptr;
    }
}

int travers ()
{
    node *srt;
    srt = Head;
    while(srt != NULL)
    {
        cout << srt->info << endl;
        srt = srt->link;
    }
}

int main()
{
    int n,item;
    cout << "Enter item size : " << endl;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> item ;
        insertion(item);
    }
    travers();
    return 0;
}
