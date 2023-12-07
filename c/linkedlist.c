#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data;
	struct node *next;
};

int size = 0;
struct node *head = NULL;

void insertion();

void main()
{
	temp = head;
	while(1)
	{
		int input;
		printf("Enter 1 for insertion, 2 for deletion, 3 for display, 4 to exit: ");
		scanf("%d",&input);	
		switch(input)
		{
			case 1:
				insertion();
				break;
			case 4:
				exit(0);
		}
	}
}	  

void insertion()
{
	struct node *newnode, *temp;
	newnode = (struct node*) malloc(sizeof(struct node));	
	
	
	void beg()
	{
		newnode->next = head;
		head = newnode;
	}
	
	void end()
	{
		int i = 1;
		while(i <= size)
		{
			temp = temp->next;
			i++;
		}
		temp->next = newnode;
		newnode->next = NULL;
	}
	
	void partpos()
	{
		int pos;
		printf("Enter the position to be inserted: ");
		scanf("%d",&pos);
		int i = 1;
		while( i < pos)
		{
			temp = temp->next;
			i++;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
	
	size++;
	
	while(1)
	{
		int type;
		printf("Enter the element to be inserted: ");
		scanf("%d",&newnode->data);
		printf("Enter \n1: at the beginning \n2: at the end \n3: at a particular position \n4: to exit: ");
		scanf("%d",&type);
		switch(type)
		{
			case 1:
				beg();
				break;
			case 2:
				end();
				break;
			case 3: 
				partpos();
				break;
			case 4:
				exit(0);
		}
	}
}

void display()
{

	while(i <= size)
	{
		
	
