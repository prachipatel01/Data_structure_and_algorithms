#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int arr[],int n)
{
	int i,j,swaps=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{

				int k=arr[i];
				arr[i]=arr[j];
				arr[j]=k;
				swaps++;
			}
		}
	}
	printf("no. of swaps in bubble sort : %d\n",swaps);


}

int main()
{
	int n;
	printf("enter the no. of elements\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	bubble_sort(arr,n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

}
