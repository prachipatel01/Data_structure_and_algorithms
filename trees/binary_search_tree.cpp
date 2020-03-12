#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *tree=NULL;

struct node *insert(struct node *tre,int value)
{
    if(tre==NULL)
    {
        tre=(struct node *)malloc(sizeof(struct node));
        tre->data=value;
        tre->left=NULL;
        tre->right=NULL;
        return tre;
    }
    else
    {
        if(value<tre->data)
        {
            tre->left=insert(tre->left,value);
            return tre;
        }
        else if(value>tre->data)
        {
            tre->right=insert(tre->right,value);
            return tre;
        }
    }
}

void inorder(struct node *tre)
{
    if(tre!=NULL)
    {
        inorder(tre->left);
        printf("%d ",tre->data);
        inorder(tre->right);
    }
}

void postorder(struct node *tre)
{
    if(tre!=NULL)
    {
        postorder(tre->left);
        postorder(tre->right);
        printf("%d ",tre->data);
    }
}

void preorder(struct node *tre)
{
    if(tre!=NULL)
    {
        printf("%d ",tre->data);
        preorder(tre->left);
        preorder(tre->right);
    }
}

int main()
{
    int x=0;
    clock_t t;
    while(x!=5)
    {
        printf("1:insert\n2:inorder traversal\n3:postorder traversal\n4:preorder traversal\n5:exit\n");
        scanf("%d",&x);
        if(x==1)
        {
            struct node *ptr;
            int z;
            printf("enter the value to be inserted\n");
            scanf("%d",&z);
            {if(tree==NULL)
                tree=insert(tree,z);
            else
                ptr=insert(tree,z);
            }
            }
        if(x==2)
        {
            inorder(tree);
            printf("\n");
        }
        if(x==3)
        {
            postorder(tree);
            printf("\n");
        }
        if(x==4)
        {
            preorder(tree);
            printf("\n");
        }
    }
}
