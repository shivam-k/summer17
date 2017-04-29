#include <stdio.h>
#include <malloc.h>
#include <unistd.h>

typedef struct node
{
	int data;
	struct node *next;
}node;

void printlist(node *n)
{
	while(n!=NULL)
	{
		printf("%d ", n->data);
		n=n->next;	
	}
}


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
	printf("\nOriginal list: ");
	printlist(head->next);

	node *douba, *j;
	douba=(node*)malloc(sizeof(node));
	i=head->next;
	j=douba;
	j->next=(node*)malloc(sizeof(node));
	j=j->next;
	while(i!=NULL)
	{
		j->next=(node*)malloc(sizeof(node));
		j->data=i->data*2;
		j=j->next;
		i=i->next;
	}
	printf("\nDoubled list: \n");
	printlist(douba->next);
	printf("\n");
}
