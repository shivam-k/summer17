#include <stdio.h>
#include <malloc.h>

int arr[]={0, 18, 19, 17, 27, 28, 42, 33, 26};
int left[]={0, -1, 5, 1, -1, 8, 4, -1, -1};
int right[]={0, -1, 6, -1, 7, 3, -1, -1, -1};

int main()
{
	int max=arr[0], i=1;
	int n=sizeof(arr)/sizeof(arr[0]);

	// int col[]={2, 5, 6, 8, 3, 4, 1, 7};
	//int size=sizeof(col)/sizeof(col[0]);
	int l, r, j=2, pass=0, t1, t2;
	// while(1)
	// {
	// 	printf("%d\n", j);
		
	// 	if(pass==0)
	// 	{
	// 		j=left[j];
	// 		pass=1;
	// 	}
	// 	else if(pass==1)
	// 	{
	// 		j=right[j];
	// 		pass=0;
	// 	}
	// 	if(j==-1)
	// 		break;

	// }


	printf("%d ", arr[2]);
	while(1)
	{
		l=left[j];
		r=right[j];
		if(l!=-1)
			printf("%d ", arr[l]);
		if(r!=-1)
			printf("%d ", arr[r]);
		
		if(pass==0)
		{
			printf("l-%d\n", j);
			t1=j;
			j=left[t1];
			t1=j;
			pass=1;
		}
		else if(pass==1)
		{
			printf("r-%d\n", j);
			t2=j;
			j=right[t2];
			t2=j;
			pass=0;
		}
		if(t1==-1 && t2==-1)
			break;
	}
	
	printf("\n");
}