#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;
struct node *cur=NULL;


void enqueue(int value)
{
    if(head==NULL)
    {
        head=(struct node*)malloc(sizeof(struct node));
        head->data=value;
        head->next=head;
        cur=head;
        return;
    }
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=value;
    ptr->next=head;
    cur->next=ptr;
    cur=ptr;
}


int dequeue()
{
    struct node *ptr;
    ptr=head;
    cur->next=ptr->next;
    int x=ptr->data;
    head=ptr->next;
    return x;
}

void display()
{
    struct node *ptr=head;
    printf("%d ",ptr->data);
    ptr=ptr->next;
    while(ptr!=head)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

int main()
{
    int i=0;
    while(i<=3)
    {
        printf("enter your choice\n1:enqueue\n2:dequeue\n3:display\n4:exit\n");
        scanf("%d",&i);
        if(i==1)
        {
            printf("enter element to be enqueued\n");
            int value;
            scanf("%d",&value);
            enqueue(value);
        }
        if(i==2)
        {
            int element=dequeue();
            printf("dequeued element is %d\n",element);
        }
        if(i==3)
        {
            display();
        }
    }
    return 0;
}
