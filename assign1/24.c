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
	printf("Give k: ");
	scanf("%d", &k);
	i=head;
	for(g=1; g<=k; g++)
		i=i->next;
	int sum=i->data;
	i=head->next;
	while(i->data%2!=0)
		i=i->next;
	sum=sum+i->data;
	printf("\nSum of 1st even and %dth element = %d\n", k, sum);
}
