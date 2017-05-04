#include <stdio.h>
#include <malloc.h>

int arr[]={0, 18, 19, 17, 27, 28, 42, 33, 26};
int left[]={0, -1, 5, 1, -1, 8, 4, -1, -1};
int right[]={0, -1, 6, -1, 7, 3, -1, -1, -1};

void printlist(int head)
{
	if(head!=-1)
	{
		printlist(left[head]);
		printf("%d ", arr[head]);
		printlist(right[head]);
	}
}

int main()
{
	int max=arr[0], i=1;
	int n=sizeof(arr)/sizeof(arr[0]);

	int head=2;
	printlist(head);
	printf("\n");
}