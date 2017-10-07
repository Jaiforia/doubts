#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
struct node{
	char name[100];
	int roll_no;
	double gp;
	struct node *next;
};

struct node *start;
void create()
{
	start=NULL;
}
struct node *ptr1, *ptr2;
void insert_r(char a[100],int r,double p)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	strcpy(newnode->name,a);
	newnode->roll_no=r;
	newnode->gp=p;
	if(start==NULL)
		{
		start=newnode;
		newnode->next=NULL;
		}
	else
		{
		ptr1=NULL;
		ptr2=start;
		while(ptr2!=NULL&&ptr2->roll_no<newnode->roll_no)
			{
			ptr1=ptr2;
			ptr2=ptr2->next;
			}
		if(ptr1==NULL)
			{
			newnode->next=start;
			start=newnode;
			}
		else
			{
			newnode->next=ptr2;
			ptr1->next=newnode;
			}
		}
}

void insert_g(char b[100],int r,double p)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	strcpy(newnode->name,b);
	newnode->roll_no=r;
	newnode->gp=p;
	if(start==NULL)
		{
		start=newnode;
		newnode->next=NULL;
		}
	else
		{
		ptr1=NULL;
		ptr2=start;
		while(ptr2!=NULL&&ptr2->gp>newnode->gp)
			{
			ptr1=ptr2;
			ptr2=ptr2->next;
			}
		if(ptr1==NULL)
			{
			newnode->next=start;
			start=newnode;
			}
		else
			{
			newnode->next=ptr2;
			ptr1->next=newnode;
			}
		}
}
void display()
{
	ptr1=start;
	while(ptr1!=NULL)
		{
		printf("Name: %s Roll No: %d GPA: %ld \n",ptr1->name,ptr1->roll_no,ptr1->gp);
		ptr1=ptr1->next;
		}
}
void main()
{
	double p;
	int i=0,a=0,n,choice=0;
	char x[100];
	clrscr();
	while(choice<3)
	{
		printf("\n1.Sort according to roll no 2.Sort according to gp 3.Exit\n");
		printf("Enter the choice\n");
		scanf("%d",&choice);
		if(choice==1)
			{
			create();
				while(i<3)
				{
					printf("\n1.Insert 2.Display 3.Exit\n");
					printf("Enter the choice\n");
					scanf("%d",&i);
					if(i==1)
						{
						printf("Enter the name, roll no and CGPA:");
						scanf("%s %d %ld",x[100],&n,&p);
						insert_r(x,n,p);
						}
					else if(i==2)
						{
						display();
						}
				}
			}
		else if(choice==2)
			{
			create();
				while(a<3)
				{
					printf("\n1.Insert 2.Display 3.Exit\n");
					printf("Enter the choice\n");
					scanf("%d",&a);
					if(a==1)
						{
						printf("Enter the name, roll no and CGPA:");
						scanf("%s %d %f",x[100],&n,&p);
						insert_g(x,n,p);
						}
					else if(a==2)
						{
						display();
						}
				}
			}
	}
	getch();
}
