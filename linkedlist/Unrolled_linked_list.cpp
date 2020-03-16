#include<bits/stdc++.h>
using namespace std;
#define n 4

struct node
{
    struct node *next;
    int num_elements;
    int arr[n];
};
struct node *head;
void Display()
{
    struct node *cur;
    cur=head;
    if(head==NULL)
    {
        cout<<"list is empty\n";
    }
    else
    {
        while(cur!=NULL)
        {
            for(int i=0;i<cur->num_elements;i++)
            {
                cout<<cur->arr[i]<<" ";
            }
            cout<<endl;
            cur=cur->next;
        }
    }
}

void delete_element(int e)
{
    struct node *cur;
    cur=head;
    while(cur!=NULL)
    {
        for(int i=0;i<cur->num_elements;i++)
        {
            if(cur->arr[i]==e)
            {
                for(int j=i+1;j<cur->num_elements;j++)
                {
                    cur->arr[j-1]=cur->arr[j];
                }
                cur->num_elements-=1;
                return;
            }
        }
        cur=cur->next;
    }
    cout<<"element not found\n";
}

struct node *create_node(struct node *cur,int num)
{
    cur->num_elements=num;
    cout<<"enter elements\n";
    for(int i=0;i<num && i<n;i++)
    {
        cin>>cur->arr[i];
    }
    cur->next=NULL;
    return cur;
}

int main()
{
    head=NULL;
    struct node *cur;
    struct node *prev;
    prev=cur=head;
    int x=0;
    while(x<4 && x>=0)
    {
        cout<<"enter operation\n"<<"1.Insert node\n"<<"2.Delete Element for node\n"<<"3.Display Linked List\n"<<"4.Exit\n";
        cin>>x;
        if(x==1)
        {
            cur=new node;
            int num;
            cout<<"enter the number of elements to be inserted in a node\n";
            cin>>num;
            cur=create_node(cur,num);
            if(head==NULL)
            {
                head=cur;
                prev=head;
            }
            else
            {
                prev->next=cur;
                prev=cur;
            }
        }
        else if(x==2)
        {
            cout<<"enter element to be deleted\n";
            int element;
            cin>>element;
            delete_element(element);
        }
        else if(x==3)
        {
            Display();
        }
    }
    return 0;
}

