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
	int g, n, k, t;
	printf("Give numbers of elements: ");
	scanf("%d", &n);

	head=(node*)malloc(sizeof(node));     //allocating memory to head
	i=head;       //giving address of node head to node i
	for(g=1; g<=n; g++)
	{
		i->next=(node*)malloc(sizeof(node));
		i=i->next;
		printf("Give %dth element ", g);
		scanf("%d", &(i->data));
	}
	i->next=NULL;
	printf("Give k & t: ");
	scanf("%d %d", &k, &t);
	i=head->next;
	int max=(k>t?k:t), sum=0;
	printf("max=%d\n", max);
	for(g=1; g<=max; g++)
	{
		if(g==k)
			sum=sum+i->data;
		if(g==t)
			sum=sum+i->data;
		i=i->next;
	}
	printf("\nSum of %dth and %dth element = %d\n", k, t, sum);
}
