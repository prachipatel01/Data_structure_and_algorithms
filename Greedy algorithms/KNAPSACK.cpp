#include<iostream>
using namespace std;

void knapsack(float value[],float weight[],float vw[],int n,float total)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(vw[i]<vw[j])
            {
                float k=vw[i];
                vw[i]=vw[j];
                vw[j]=k;
                int m=value[i];
                value[i]=value[j];
                value[j]=m;
                m=weight[i];
                weight[i]=weight[j];
                weight[j]=m;
            }
        }
    }
    float new_total=0;
    int i=0;
    float new_value=0;
    while(new_total<=total)
    {
        new_total+=weight[i];
        new_value+=value[i];
        if(new_total>total)
        {
            new_total-=weight[i];
            int remaining=total-new_total;
            cout<<remaining<<endl;
            new_value-=value[i];
            new_value+=remaining*value[i]/weight[i];
            new_total+=remaining;
            break;
        }
        i++;
    }
    cout<<"total value"<<new_value<<endl;




}

int main()
{
    int n;
    float total;
    cout<<"enter number of weights and total weight needed"<<endl;
    cin>>n>>total;
    float value[n],weight[n];
    float vw[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter value"<<endl;
        cin>>value[i];
        cout<<"enter weight"<<endl;
        cin>>weight[i];
        vw[i]=value[i]/weight[i];
    }
    knapsack(value,weight,vw,n,total);
}
