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
	int temp;
	scanf("%d", &temp);
	i=head->next;
	int pass=0;
	while(i!=NULL)
	{
		if(i->data==temp)
			pass=1;
		i=i->next;
		if(pass==1)
		{
			if(i->data%2==0)
			{
				printf("\nFirst even after %d is %d\n", temp, i->data);
				break;
			}
		}
	}
	printf("\n");
}
