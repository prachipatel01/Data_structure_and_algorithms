#include<stdio.h>
#include<stdlib.h>

int SIZE=10;

int queue[10];
int rear=-1,front=-1;

void insert_into_queue(value)
{
    if(front==-1)
        front++;
    rear=(rear+1)%SIZE;
    if(rear==front && rear!=0)
    {
        printf("queue is full\n");
        return;
    }
    queue[rear]=value;
    return;
}

int delete_element()
{
    if(front==rear+1)
    {
        printf("queue is empty\n");
        front=-1;
        rear=-1;
        return;
    }
    else if(rear==front && front==-1)
    {
        printf("queue is empty\n");
        front=-1;
        rear=-1;
        return;
    }
    int temp=queue[front];
    front=(front+1)%SIZE;
    return temp;
}

void display()
{
    if(front==rear)
    {
        printf("queue is empty\n");
        return;
    }
    for(int i=front;i<=rear;i=(i+1)%SIZE)
    {
        printf("%d ",queue[i]);
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
            printf("enter the number\n");
            int value;
            scanf("%d",&value);
            insert_into_queue(value);
        }
        if(i==2)
        {
            int x=delete_element();
            if(x!=0)
            printf("dequeued element is %d\n",x);
        }
        if(i==3)
        {
            display();
        }
    }
}
