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
	if(n==NULL)
		return;
	else
	{
		node *ptr;
		ptr=n->next;
		printlist(node *ptr);
	}
	printf("%d ", n->data);
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
	//i=head->next;
	
	printlist(head);
}
