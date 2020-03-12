#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head;

int main()
{
    struct node *ptr;
    struct node *cur;
    struct node *prev;
    head=NULL;
    prev=NULL;
    cur=head;
    int x;
    cout<<"enter the operation to be perform"<<endl;
    cout<<"x=1 for inserting elements in the linked lisk"<<endl;
    cout<<"x=2 for display"<<endl;
    cout<<"x=3 for inserting element at the begining"<<endl;
    cout<<"x=4 for inserting element at the end"<<endl;
    cout<<"x=5 for inserting element after a node"<<endl;
    cout<<"x=6 for inserting element before a node"<<endl;
    cout<<"x=7 for exit"<<endl;
    cin>>x;
    while(x<7)
    {
        if(x==1)
        {
            if(cur==NULL)
            {
                ptr=new node;
                head=ptr;
                cout<<"enter the data to be inserted"<<endl;
                cin>>ptr->data;
                ptr->next=head;
                ptr->prev=NULL;
                ptr->next=NULL;
                cur=ptr;
            }
            else
            {
                ptr=new node;
                cin>>ptr->data;
                ptr->next=NULL;
                ptr->prev=cur;
                cur->next=ptr;
                cur=ptr;
            }
        }
        if(x==2)
        {
                cur=head;
                while(cur!=NULL)
                {
                    cout<<cur->data<<" ";
                    cur=cur->next;
                }
        }
        if(x==3)
        {
            cur=head;
            ptr=new node;
            cin>>ptr->data;
            ptr->next=head;
            ptr->prev=NULL;
            head=ptr;
            cur->prev=ptr;
        }
        if(x==4)
        {
            cur=head;
            while(cur->next!=head)
            {
                cur=cur->next;
            }
            ptr=new node;
            cin>>ptr->data;
            cur->next=ptr;
            ptr->prev=cur;
            ptr->next=NULL;
        }
        if(x==5)
        {
            cur=head;
            int y,n=1;
            cout<<"enter the no. of node after which the element is inserted"<<endl;
            cin>>y;
            while(n!=y)
            {
                cur=cur->next;
                n++;
            }
            ptr=new node;
            cout<<"enter the element to be inserted"<<endl;
            cin>>ptr->data;
            ptr->next=cur->next;
            cur->next=ptr;
        }
        if(x==6)
        {
            cur=head;
            int y,n=1;
            cout<<"enter the no. of node before which the element is inserted"<<endl;
            cin>>y;
            while(n!=y-1)
            {
                cur=cur->next;
                n++;
            }
            ptr=new node;
            cout<<"enter the element to be inserted"<<endl;
            cin>>ptr->data;
            ptr->next=cur->next;
            cur->next=ptr;
        }
        cout<<"enter the operation to be perform"<<endl;
        cout<<"x=1 for inserting elements in the linked lisk"<<endl;
        cout<<"x=2 for display"<<endl;
        cout<<"x=3 for inserting element at the begining"<<endl;
        cout<<"x=4 for inserting element at the end"<<endl;
        cout<<"x=5 for inserting element after a node"<<endl;
        cout<<"x=6 for inserting element before a node"<<endl;
        cout<<"x=7 for exit"<<endl;
        cin>>x;
    }
    return 0;
}
