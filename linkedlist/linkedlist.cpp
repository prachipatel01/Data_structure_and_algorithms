#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head;
int main()
{
    struct node *cur;
    struct node *ptr;
    int x;
    head=NULL;
    cur=head;
    cout<<"enter the operation to be perform"<<endl;
    cout<<"x=1 for inserting elements in the linked lisk"<<endl;
    cout<<"x=2 for display"<<endl;
    cout<<"x=3 for inserting element at the begining"<<endl;
    cout<<"x=4 for inserting element at the end"<<endl;
    cout<<"x=5 for exit"<<endl;
    cin>>x;
    while(x<5)
    {
        if(x==1)
        {
            if(cur==NULL)
            {
                cur=new node;
                cout<<"enter element to be inserted"<<endl;
                cin>>cur->data;
                cur->next=NULL;
                head=cur;
                ptr=cur;
            }
            else
            {
                cur=new node;
                ptr->next=cur;
                cout<<"enter element to be inserted"<<endl;
                cin>>cur->data;
                cur->next=NULL;
                ptr=cur;
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
            ptr=new node;
            cout<<"enter element to be inserted"<<endl;
            cin>>ptr->data;
            ptr->next=head;
            head=ptr;
        }
        if(x==4)
        {
            cur=head;
            while(cur->next!=NULL)
            {
                cur=cur->next;
            }
            ptr=new node;
            cout<<"enter element to be inserted"<<endl;
            cin>>ptr->data;
            ptr->next=NULL;
            cur->next=ptr;
        }
        cout<<"enter the operation to be perform"<<endl;
        cout<<"x=1 for inserting elements in the linked lisk"<<endl;
        cout<<"x=2 for display"<<endl;
        cout<<"x=3 for inserting element at the begining"<<endl;
        cout<<"x=4 for inserting element at the end"<<endl;
        cout<<"x=5 for exit"<<endl;
        cin>>x;
    }
    return 0;
}
