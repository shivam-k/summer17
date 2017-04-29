#include <stdio.h>
#include <malloc.h>
#include <unistd.h>

typedef struct node
{
	int data;
	struct node *next;
}node;
int main()
{
	node *i, *head;
	int g, n, k;
	//printf("Give numbers of elements: ");
	scanf("%d", &n);

	head=(node*)malloc(sizeof(node));     //allocating memory to head
	i=head;       //giving address of node head to node i
	for(g=1; g<=n; g++)
	{
		i->next=(node*)malloc(sizeof(node));
		i=i->next;
		//printf("Give %dth element ", g);
		scanf("%d", &(i->data));
	}
	i->next=NULL;
	printf("\nSum: \n");
	i=head->next;
	int sum, temp, j=0;
	while(j<n-1)
	{
		temp=(*i).data;
		i=i->next;
		sum=temp+(*i).data;
		j++;
		fflush(stdout);sleep(1);
		printf("sum=%d\n", sum);
	}
}
