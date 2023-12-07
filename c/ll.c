#include<stdio.h>
#include<stdlib.h>

void insert();
struct node
{
	int data;
	struct node *next;
};

struct node *head=NULL;

void main()
{
	int input;
	printf("Enter 1 to insert, 2 to exit");
	switch(input)
	{
		case 1:
			insert();
			break;
			
		case 2:
			exit(0);
	}
}

void insert()
{
	struct node *newnode;
	newnode = (struct node *) malloc(sizeof(struct node));
	printf("Enter the value: ");
	scanf("%d",&newnode->data);
	newnode -> next = head;
	head = newnode;
	
}
void search()
{}
	
