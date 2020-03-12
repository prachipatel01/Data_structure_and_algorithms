#include <stdio.h>
int n,qi=0,qj=0;
int MAX_VALUE=1000;


void bft(int a[],int arr[][n],int q[],int m)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            k=i;
        }
    }
    for(j=0;j<n;j++)
    {
        int x=0;
        if(arr[k][j]==1)
        {
            for(int p=0;p<qi;p++)
            {
                if(q[p]==a[j])
                {
                    x++;
                }
            }
        }
        if(x==0 && arr[k][j]==1)
        {
            q[qi]=a[j];
            qi++;
        }
    }
    while((q[qj+1]!=MAX_VALUE || q[qj+1]!=n-1) && qj!=n-1)
    {
        qj++;
        if(qj==n || q[qj]==MAX_VALUE)
            break;
        bft(a,arr,q,q[qj]);
    }


}


void display(int q[])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",q[i]);
    }
    printf("\n");
}



int main()
{
    printf("enter the number of nodes\n");
    scanf("%d",&n);
    int i,a[n],arr[n][n],j;
    int q[n];
    for(i=0;i<n;i++)
    {
        printf("enter the value of node %d\n",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            int ans;
            printf("Is there any connection between %d and %d\n",a[i],a[j]);
            scanf("%d",&ans);
            if(ans==1)
            {
                arr[i][j]=1;
            }
            if(ans==0)
            {
                arr[i][j]=0;
            }
        }
    }

    int m;
    for(int l=0;l<n;l++)
    {
        q[l]=MAX_VALUE;
    }
    printf("enter value of first node for bft\n");
    scanf("%d",&m);
    q[qi]=m;
    qi++;
    bft(a,arr,q,m);
    display(q);
}

