#include <iostream>
using namespace std;

int is_empty_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            return i;
        }
    }
    return -1;
}

void sorting(int p[],int d[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(p[i]<p[j])
            {
                int k=p[i];
                p[i]=p[j];
                p[j]=k;

                k=d[i];
                d[i]=d[j];
                d[j]=k;
            }
        }
    }
}

void jobscheduling(int profit[],int deadline[],int n,int max_time)
{
    int total=0;
    sorting(profit,deadline,n);
    int new_arr[max_time];
    for(int i=0;i<max_time;i++)
    {
        new_arr[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(new_arr[deadline[i]-1]!=0)
        {
            int x=is_empty_array(new_arr,deadline[i]-1);
            if(x!=-1)
            {
                new_arr[x]=profit[i];
            }
        }
        else
        {
            new_arr[deadline[i]-1]=profit[i];
        }
    }
    for(int i=0;i<max_time;i++)
    {
        cout<<i+1<<" ";
    }
    cout<<endl;
    for(int i=0;i<max_time;i++)
    {
        total+=new_arr[i];
        cout<<new_arr[i]<<" ";
    }
    cout<<endl<<total;
}

int main()
{
    int n,max_time;
    cout<<"enter the number of jobs and maxtime"<<endl;
    cin>>n>>max_time;
    int profit[n],deadline[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the profit"<<endl;
        cin>>profit[i];
        cout<<"enter deadline"<<endl;
        cin>>deadline[i];
    }
    jobscheduling(profit,deadline,n,max_time);
}
