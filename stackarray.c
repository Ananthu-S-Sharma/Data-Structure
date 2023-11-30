#include<stdio.h>
int stack[100],ch,n,top,x,i;
void push(void);
void pop(void);
void display(void);
void search(void);

int main()
{
top=-1;
printf("\nEnter the size:");
scanf("%d",&n);
printf("\nSTACK USING ARRAY:");
printf("\n1.push,\n2.pop,\n3.search,\n4.display,\n5.exit");
do
{
printf("\nEnter the choice:");
scanf("%d",&ch);

switch(ch)
{
case 1:
	push();
	break;

case 2:

	pop();
	break;

case 3:

	search();
	break;

case 4:

	display();
	break;

case 5:
	exit(0);
default: 

	printf("\nINVALID CHOICE");
	
}

}while(ch!=6);
}

void push()
{
if(top>=n-1)
{
printf("\nStack is full");
}
else
{
printf("\nEnter the elements to be added:");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if(top==-1)
{
printf("\nStack is underflow");
}
else
{
printf("\nPoped element is %d",stack[top]);
top--;
}
}




void display()
{
if(top>=0)
{
printf("\nElement in stack:");
for(i=top;i>=0;i--)
printf("%d",stack[i]);
printf("\nEnter the next choice:");
}
else
{
printf("\nStack is empty");
}
}

void search()
{
int se,flag=0;
printf("Enter the element to be searched:");
scanf("%d",&se);
for(int i=top;i>-1;i--)
{
if(Stack[i]==se)
{
printf("%d Found in the stack\n",se);
flag++;
break;
}
}
if(flag==0)
{
printf("%d Not found in stack\n",se);
}





 



