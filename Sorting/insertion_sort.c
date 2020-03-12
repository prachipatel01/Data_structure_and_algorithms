#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertion_sort(int arr[],int n)
{
	int i=1;
	for(i=1;i<n;i++)
	{
		int cur=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>cur)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=cur;
	}
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

	insertion_sort(b,n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

}

