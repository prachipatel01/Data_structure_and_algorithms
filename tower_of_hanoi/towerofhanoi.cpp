/*#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char from_rod,
                    char to_rod, char aux_rod)
{
    if (n == 1)
    {
        cout << "Move disk 1 from rod " << from_rod <<
                            " to rod " << to_rod<<endl;
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod <<
                                " to rod " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

// Driver code
int main()
{
    int n; // Number of disks
    printf("enter number of disks");
    scanf("%d",&n);
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
    return 0;
}



*/






#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void towerofhanoi(int n,char A,char B,char C)
{
    if(n==1)
    {
        cout<<"move disk 1 from "<<A<<" to "<<B<<endl;
        return;
    }
    towerofhanoi(n-1,A,C,B);
    cout<<"move disk "<<n<<" from "<<A<<" to "<<C<<endl;
    towerofhanoi(n-1,C,B,A);
}



int main() {
    int T;
    cout<<"enter number of testcase"<<endl;
    cin>>T;
    while(T--)
    {
        int n;
        cout<<"enter number of disks"<<endl;
        cin>>n;
        towerofhanoi(n,'A','C','B');
    }
	return 0;
}

