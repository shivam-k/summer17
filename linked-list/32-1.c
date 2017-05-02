#include <stdio.h>
#include <malloc.h>
#include <unistd.h>

typedef struct node
{
	int data;
	struct node *prev;
	struct node *next;
}node;

//have used doubly linked-list to print the list
node* printlist(node *head)
{
	node *temp, *ptr;
	temp=head;
	while(temp->next!=NULL)
		temp=temp->next;
	ptr=temp;
	while(ptr!=NULL)
	{
		printf("%d ", ptr->data);
		ptr=ptr->prev;
	}
}

int main()
{
	node *i, *head, *temp;
	int g, n, k;
	printf("Give numbers of elements: ");
	scanf("%d", &n);

	head=(node*)malloc(sizeof(node));    
	i=head;
	temp=NULL;       
	for(g=1; g<=n; g++)
	{
		printf("Give %dth element ", g);
		scanf("%d", &(i->data));
		i->prev=temp;
		if(g==n)
			break;
		temp=i;
		i->next=(node*)malloc(sizeof(node));
		i=i->next;
	}
	i->next=NULL;
	printf("\nAll elements in reverse order: ");
	printlist(head);
	printf("\n");
}
