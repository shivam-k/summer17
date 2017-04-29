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
	i=head->next;
	int j=0;
	printf("All elements between 1st two even ");
	while(j<2)
	{
		i=i->next;
		if(i->data%2==0)
			j++;
		if(j>=1)
			printf("%d ", i->data);
	}
	printf("\n");
}
