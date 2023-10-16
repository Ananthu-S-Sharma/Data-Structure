#include<stdio.h>
void main()
{
int i,n,key,a[50],f=0;
printf("Enter the size:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the key to search:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
f=1;
break;
}
}
if(f==1)
{
printf("the elements are found:");
}
else
{
printf("the elements are not found:");
}
}

