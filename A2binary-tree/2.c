#include <stdio.h>
#include <malloc.h>

int arr[]={0, 18, 19, 17, 27, 28, 42, 33, 26};
int left[]={0, -1, 5, 1, -1, 8, 4, -1, -1};
int right[]={0, -1, 6, -1, 7, 3, -1, -1, -1};

int height(int head, int x)
{
	int a=0, b=0;
	if(head==-1)
		return x;
	if(head!=-1)
	{
		int y=x+1;
		a=height(left[head], y);
		b=height(right[head], y);
		if(b>a)
			b=a;
		return a;
	}
}

int main()
{
	int max=arr[0], i=1;
	int n=sizeof(arr)/sizeof(arr[0]);

	int k;
	scanf("%d", &k);
	printf("%d", height(k, 0));
	printf("\n");
}