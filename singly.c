#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
int data;
struct node*next;
};
struct node*head;


void insertfirst()
{
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node*));
printf("Enter the elements:");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
}
else
{
newnode->next=head;
head=newnode;
}
printf("Inserted element is: %d",newnode->data);
}


void insertpos()
{
int pos=0;
int i=1;
struct node *newnode,*temp;
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the elements:");
scanf("%d",&newnode->data);
newnode->next=NULL;
printf("Enter the position:");
scanf("%d",&pos);
temp=head;
while(i<pos)
{
temp=temp->next;
i++;
}
newnode->next=temp->next;
temp->next=newnode;
printf("Inserted element is %d",newnode->data);
}


void insertlast()
{
struct node *newnode,*temp;
newnode=(struct node*)malloc(sizeof(struct node*));
printf("Enter the elements:");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
}
else
{
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newnode;
temp=newnode;
}
printf("Inserted element is %d",newnode->data);
}


void deletefirst()
{
struct node *temp;
if(head==NULL)
{
printf("No elements");
}
else
{
temp=head;
head=head->next;
printf("Removed element is: %d",temp->data); 
free(temp);
}
}


void deletepos()
{
struct node *nextnode,*temp;
int i=2,pos=0;
printf("Enter the position to be deleted from:");
scanf("%d",&pos);
temp=head;
if(pos==1)
{
deletefirst();
}
else
{
while(i<pos-1)
{
temp=temp->next;
i++;
}
nextnode=temp->next;
temp->next=nextnode->next;
printf("Removed element is %d",nextnode->data);
free(nextnode);
}
}

void deletelast()
{
struct node *temp,*previousnode;
if(head==NULL)
{
printf("No elements");
}
else
{
temp=head;
while(temp->next!=NULL)
{
previousnode=temp;
temp=temp->next;
}
previousnode->next=NULL;
printf("Removed element is %d",temp->data);
free(temp);
}
}


void display()
{
struct node *temp;
temp=head;
if(head==NULL)
{
printf("No elements to display");
}
else
{
while(temp!=NULL)
{
printf("The elements are: %d",temp->data);
temp=temp->next;
}
}
}


void search()
{
int key=0;
int pos=0;
struct node *temp;
printf("Enter the element to be searched:");
scanf("%d",&key);
temp=head;
while(temp->next !=NULL)
{
if(temp->data==key)
{
printf("Element %d found at position %d\n",key,pos+1);
}
temp=temp->next;
pos++;
}
if(temp->next==NULL)
{
if(key==temp->data)
{
printf("Element %d Not Found %d \n",key,pos+1);
}
}
}


void main()
{
int ch=0;
printf("\n SINGLY LINKEDLIST");
printf("\nEnter your choice:\n 1.insert at first node,\n2.insert at specific position,\n3.insert at last node,\n4.delete at first node,\n5.delete at specific node,\n6.delete at last node,\n7.search,\n8.display,\n9.exit");
do
{
printf("\n Enter a choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
	insertfirst();
	break;
case 2:
	insertpos();
	break;
case 3:
	insertlast();
	break;
case 4:
	deletefirst();
	break;
case 5:
	deletepos();
	break;
case 6:
	deletelast();
	break;
case 7:
	search();
	break;
case 8:
	display();
	break;
case 9:
	exit(0);
	printf("EXITING THE PROGRAM");
	return;
default:
printf("\n  INVALID ENTRY");
}
}
while(ch!=9);
}






