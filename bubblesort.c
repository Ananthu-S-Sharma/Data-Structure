#include<stdio.h>
void main()
{
int i,j,n,a[50],temp;
printf("enter the size:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n-1-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("sorted list=");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
