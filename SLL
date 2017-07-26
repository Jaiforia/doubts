#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
  int data;
  struct node *next;
};
  struct node *start=NULL;
void create();
void display();
void insertbeg();
void insertafter();
void deleteend();


void main()
{
	clrscr();
	int a;
	while(a!=6)
	{
	printf("\n\nEnter 1 to create linked list.\n");
	printf("Enter 2 to display linked list.\n");
	printf("Enter 3 to insert new node at beginning.\n");
	printf("Enter 4 to insert node after existing node.\n");
	printf("Enter 5 to delete node at end.\n");
	printf("Enter 6 to exit.\n");
	printf("Enter your option...\n");
	scanf("%d",&a);
	switch(a)
		{
		case 1: create();
			printf("Linked list created");
		break;
		case 2: display();
		break;
		case 3: insertbeg();
			printf("\nThe node has been inserted.\n");
		break;
		case 4: insertafter();
		break;
		case 5: deleteend();
		break;
		default:printf("BYE");
		}
      }
      getch();
}

void create()
{
    int num,n,i;
    struct node *ptr,*newnode;
    printf("\nEnter the no of nodes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	printf("\nEnter the data ");
	scanf("%d",&num);
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=num;
		if(start==NULL)
			{
			newnode->next=NULL;
			start=newnode;
			}
		else
			{
			ptr=start;
			while(ptr->next!=NULL)
				{
				ptr=ptr->next;
				}
			ptr->next=newnode;
			newnode->next=NULL;
		}
    }
}
void display()
{
	 struct node *ptr;
	 if(start==NULL)
		{
		printf("There is no list.");
		}
		else
		{
		  ptr=start;
		  while(ptr!=NULL)
		   {
		    printf("%d ",ptr->data);
		    ptr=ptr->next;
		   }
		}
}
void insertbeg()
{
	    struct node *newnode;
	    int a;
	    newnode=(struct node *)malloc(sizeof(struct node));
	    newnode->next=NULL;
	    printf("Enter the data for new node:");
	    scanf("%d",&a);
	    newnode->data=a;
	    newnode->next=start;
	    start=newnode;
}
void insertafter()
{
	  struct node *newnode,*ptr;
	  int n,a;
	  if(start==NULL)
		{
		printf("Node cannot be inserted as there is no list.");
		}
		else
		{
		  printf("Enter the data after which the new data has to be added.\n");
		  scanf("%d",&n);
		  printf("Enter the data of new node to be added.\n");
		  scanf("%d",&a);
		  newnode=(struct node*)malloc(sizeof(struct node));
		  newnode->data=a;
		  newnode->next=NULL;
		  ptr=start;
		  while(ptr->data!=n)
			{
			ptr=ptr->next;
			}
		  newnode->next=ptr->next;
		  ptr->next=newnode;
		 }
}
void deleteend()
{
	struct node *temp,*ref;
	if(start==NULL)
		{
		printf("There is no list.");
		}
		else if(start->next=NULL)
			{
			free(start);
			start=NULL;
			printf("Completed deletion.");
			}
			else
			{
			temp=start;
			while(temp->next!=NULL)
				{
				ref=temp;
				temp=temp->next;
				}
			ref->next=NULL;
			free(temp);
			printf("\nThe last node has been deleted.\n");
			}
}
