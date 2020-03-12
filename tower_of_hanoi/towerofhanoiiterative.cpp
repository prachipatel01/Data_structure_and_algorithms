#include <bits/stdc++.h>
//#include <iostream>
using namespace std;



void iterative(int n,long long x,int s[],int a[],int d[],int ts,int td, int ta)
{
    int i,k=n;

        for(i=0;i<n;i++)
        {
            s[i]=k;
            k--;
        }
        ts=n-1;
        for(i=1;i<=x;i++)
        {
            if(i%3==1)
            {
                if(s[ts]<d[td] || ts!=-1 && td==-1)
                {
                    cout<<"move disk "<<s[ts]<<" from A to C"<<endl;
                    td++;
                    d[td]=s[ts];
                    ts--;
                }
                else
                {
                    cout<<"move disk "<<d[td]<<" from C to A"<<endl;
                    ts++;
                    s[ts]=d[td];
                    td--;
                }
            }
            else if(i%3==2)
            {
                if(a[ta]<s[ts])
                {
                    cout<<"move disk "<<a[ta]<<" from B to A"<<endl;
                    ts++;
                    s[ts]=a[ta];
                    ta--;
                }
                else
                {
                    cout<<"move disk "<<s[ts]<<" from A to B"<<endl;
                    ta++;
                    a[ta]=s[ts];
                    ts--;
                }
            }
            else if(i%3==0)
            {
                if(d[td]<a[ta])
                {
                    cout<<"move disk "<<d[td]<<" from C to B"<<endl;
                    ta++;
                    a[ta]=d[td];
                    td--;
                }
                else if(d[td]>a[ta])
                {
                    cout<<"move disk "<<a[ta]<<" from B to C"<<endl;
                    td++;
                    d[td]=a[ta];
                    ta--;
                }
            }
        }
}
int main()
{
    int T;
    cout<<"enter number of test case"<<endl;
    cin>>T;
    while(T--)
    {
        int n;
        cout<<"enter number of disks"<<endl;
        cin>>n;
        int s[n],a[n],d[n],ts=-1,ta=-1,td=-1;
        long long x;
        x=pow(2,n)-1;
        iterative(n,x,s,a,d,ts,ta,td);
    }
}
