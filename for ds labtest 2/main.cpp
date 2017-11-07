#include <iostream>
#define maximum 100
using namespace std;

class bst
{
public:
    int info;
    bst *left,*right,*next;
};
bst *top=NULL,*root=NULL;

void create(int data)
{
    bst *ptr=new bst();
    ptr->info=data;
    ptr->left=NULL;
    ptr->right=NULL;
    ptr->next=NULL;
    if(root==NULL) root=ptr;
    else
    {
        bst *srt;
        for(srt=root;;)
        {
            if(srt->info>=ptr->info)
            {
                if(srt->left==NULL) {srt->left=ptr;break;}
                else
                    srt=srt->left;
            }
            else
            {
                if(srt->right==NULL) {srt->right=ptr;break;}
                else srt=srt->right;
            }
        }
    }
}

void inorder(bst *srt)
{
    if(srt==NULL) return;
    else
    {
        cout<<srt->info<<endl;
        inorder(srt->left);
        inorder(srt->right);
    }
}

int main()
{
    int item;
    while(1)
    {
        cin>>item;
        if(item==0) break;
        else
        {
            create(item);
        }
    }
    inorder(root);
    return 0;
}
