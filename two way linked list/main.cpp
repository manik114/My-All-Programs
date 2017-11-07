#include <iostream>

using namespace std;

class node
{
public:
    int info;
    node *backward,*forward;
};

node *first = NULL,*last,*tmp;

void ins (int data)
{
    node *ptr = new node();
    ptr -> info = data;
    if(first == NULL)
    {
        first = ptr;
        ptr -> forward = ptr;
        ptr -> backward = ptr;
        tmp = ptr;
    }
    else
    {
        tmp -> forward = ptr;
        ptr -> backward = tmp;
        ptr ->forward = first;
        tmp = ptr;
        last = ptr;
    }
}

void ins_first(int data)
{
    node *ptr = new node ();
    ptr -> info = data;
    ptr -> backward = last;
    ptr -> forward = first;
    first -> backward = ptr;
    first = ptr;
    last -> forward = first;
}

void ins_last(int data)
{
    node *ptr = new node ();
    ptr -> info = data;
    ptr -> backward = last;
    ptr -> forward = first;
    last -> forward = ptr;
    last = ptr;
    first -> backward = last;
}

void ins_after(int data,int element)
{
    node *srt=first,*ptr = new node ();
    ptr -> info = data;
    if(element == last -> info)
    {
        ins_last(data);
    }
    else
    {
        while(1)
        {
            if(srt -> info == element)
            {
                node *tmp;
                tmp = srt->forward;
                srt ->forward = ptr;
                ptr ->backward = srt;
                ptr ->forward = tmp;
                tmp ->backward = ptr;
                break;
            }
            else
                srt = srt ->forward;
        }
    }
}
void ins_before(int data,int element)
{
    node *srt=first,*ptr=new node();
    ptr -> info = data;
    if(element==first->info)
    {
        ins_first(data);
    }
    else
    {
        while(1)
        {
            if(srt->info==element)
            {
                node *tmp;
                tmp = srt -> backward;
                ptr -> backward = srt ->backward;
                srt ->backward = ptr;
                ptr ->forward = srt;
                tmp->forward = ptr;
                break;
            }
            else
            {
                srt = srt ->forward;
            }
        }
    }
}

void delete_first()
{
    first = first->forward;
    first->backward = last;
    last->forward = first;
}

void delete_last()
{
    last = last ->backward;
    last->forward = first;
    first->backward = last;
}

void delete_after(int data)
{
    node *srt = first,*tmp = last->backward;
    if(data == tmp->info)
    {
        delete_last();
    }
    else
    {
        while(1)
        {
            if(srt ->info==data)
            {
                node *tmp=srt->forward,*tmp2=tmp->forward;
                srt ->forward = tmp2;
                tmp2->backward = srt;
                break;
            }
            else
            {
                srt = srt->forward;
            }
        }
    }
}

void delete_before(int data)
{
    node *srt = first,*tmp = first->forward;
    if(data == tmp ->info)
        delete_first();
    else
    {
        while(1)
        {
            if(srt ->info==data)
            {
                node *tmp = srt ->backward,*tmp2=tmp ->backward;
                tmp2->forward = srt;
                srt ->backward = tmp2;
                break;
            }
            else
                srt = srt ->forward;
        }
    }
}

void delete_item (int data)
{
    node *srt = first;
    if(data == first->info)
        delete_first();
    else if(data == last ->info)
        delete_last();
    else
    {
        while(1)
        {
            if(srt -> info==data)
            {
                node *tmp = srt ->backward;
                tmp ->forward = srt ->forward;
                tmp = srt ->forward;
                tmp ->backward = srt ->backward;
                break;
            }
            else
                srt = srt ->forward;
        }
    }
}

void travers_first ()
{
    node *srt = first;
    cout << endl << "List now contains " << endl;
    while(1)
    {
        if (srt -> forward != first)
        {
            cout << srt -> info << endl;
            srt = srt -> forward;
        }
        else
        {
            cout << srt -> info << endl;
            break;
        }
    }
    cout << endl ;
}

void travers_last ()
{
    node *srt = last;
    cout << endl << "List now contains " << endl << endl;
    while(1)
    {
        if(srt -> backward != last)
        {
            cout << srt -> info << endl;
            srt = srt -> backward;
        }
        else
        {
            cout << srt -> info << endl;
            break;
        }
    }
    cout <<endl;
}

void choice()
{
    int a;
    cout << "1 for travers from first\n2 for travers from last" << endl;
    cin >> a;
    if(a==1)
        travers_first();
    else if(a==2)
        travers_last();
}

int main()
{
    int n,item,a;

    cout << "How many elements in linked list ?"<< endl;
    cin >> n;
    cout << "Insert elements " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> item;
        ins(item);
    }

    cout << "Now enter your choice "<< endl;

    while(1)
    {
        cout << "1 for insert operations\n2 for delete operations\n0 for exit " << endl;
        cin >> a;
        if(a==1)
        {
            int a;
            cout << "1 for insert first\n2 for insert last\n3 for after any particular node\n4 for before any particular node " << endl;
            cin >> a;
            if(a==1)
            {
                cout << "Enter data" << endl;
                cin >> item;
                ins_first(item);
                choice();
            }
            else if(a==2)
            {
                cout << "Enter data" << endl;
                cin >> item;
                ins_last(item);
                choice();
            }
            else if(a==3)
            {
                int e;
                cout << "Enter after which element and what element to add "<< endl;
                cin >> e >> item;
                ins_after(item,e);
                choice();
            }
            else if(a==4)
            {
                int e;
                cout << "Enter before which element and what element to add "<< endl;
                cin >> e >> item;
                ins_before(item,e);
                choice();
            }
        }
        else if(a==2)
        {
            int a;
            cout << "1 for delete first node\n2 for delete last node\n3 for delete after any particular node\n4 for delete before any particular node\n5 for delete any given node" << endl;
            cin >> a;
            if(a==1)
            {
                delete_first();
                choice();
            }
            else if(a==2)
            {
                delete_last();
                choice();
            }
            else if(a==3)
            {
                cout << "Enter after which to delete " << endl;
                cin >> item;
                delete_after(item);
                choice();
            }
            else if(a==4)
            {
                cout << "Enter before which element to delete " << endl;
                cin >> item;
                delete_before(item);
                choice();
            }
            else if(a==5)
            {
                cout << "Enter which item want to delete " << endl;
                cin >> item;
                delete_item(item);
                choice();
            }
        }

        else if (a==0)
            break;
    }
    return 0;
}
