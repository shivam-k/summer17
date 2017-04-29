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
	while(i->data%2!=0)
		i=i->next;
	node *temp; temp=head->next;
	printf("All element till first even: \n");
	while(1)
	{
		printf("%d ", temp->data);
		temp=temp->next;
		if(temp==i)
		{
			printf("%d\n", temp->data);
			break;
		}
	}
}
