#include<stdio.h>
#include<conio.h>

int heap[100];
int count=0;

int parent(int index)
{
    return index/2;
}
int leftchild(int index)
{
    return index*2;
}

int rightchild(int index)
{
    return index*2+1;
}

void upheap(int index)
{
    if(index<=1)
    {
        return;
    }
    int p=parent(index);
    if(heap[index]<heap[p])
    {
        int k=heap[index];
        heap[index]=heap[p];
        heap[p]=k;
    }
    upheap(p);
}

void push(int value)
{
    count++;
    if(count==100)
    {
        printf("heap is full\n");
        return;
    }
    heap[count]=value;
    upheap(count);
}

void downheap(int index)
{
    if((index*2)>count)
        return;
    int left=leftchild(index);
    int right=rightchild(index);
    int smallest=index;
    if(left<=count && heap[left]<heap[smallest])
    {
        smallest=left;
    }
    if(right<=count && heap[right]<heap[smallest])
    {
        smallest=right;
    }
    if(smallest==index)
        return;
    int k=heap[index];
    heap[index]=heap[smallest];
    heap[smallest]=k;
    downheap(smallest);
}

void pop()
{
    if(count==0)
        return;
    printf("poped element : %d\n",heap[1]);
    heap[1]=heap[count];
    count--;
    downheap(1);
}

void display()
{
    for(int i=1;i<=count;i++)
    {
        printf("%d ",heap[i]);
    }
    printf("\n");
}


int getminimum()
{
    if(count==0)
    {
        return -1;
    }
    return heap[1];
}

void search(int value)
{
    for(int i=1;i<=count;i++)
    {
        if(heap[i]==value)
        {
            printf("element is at %d position\n",i);
            return;
        }
    }
    printf("element not found\n");
    return;
}
int main()
{
    int i=0;
    while(i<=5)
    {
        printf("enter your choice\n1:push\n2:pop\n3:display\n4:find minimum\n5:search element\n6:exit\n");
        scanf("%d",&i);
        if(i==1)
        {
            printf("enter element to be pushed\n");
            int value;
            scanf("%d",&value);
            push(value);
        }
        else if(i==2)
        {
            pop();
        }
        else if(i==3)
        {
            display();
        }
        else if(i==4)
        {
            printf("minimum element : %d\n",getminimum());
        }
        else if(i==5)
        {
            printf("enter the element to be searched\n");
            int value;
            scanf("%d",&value);
            search(value);
        }

    }

}
