#include<stdio.h>
void main()
{
int a[50],b[50],c[100],m,n,i,j,k=0;
printf("Enter the range:");
scanf("%d",&m);
printf("Enter the elements in 1st array:");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the range:");
scanf("%d",&n);
printf("Enter the elements in 2nd array:");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}

i=0;
j=0;
while(i<m&&j<n)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
k++;
}
if(i>=m)
{
while(j<n)
{
c[k]=b[j];
j++;
k++;
}
}
if(j>=n)
{
while(i<m)
{
c[k]=a[i];
i++;
k++;
}
}
printf("After merging:");
for(i=0;i<m+n;i++)
{
printf("%d",c[k]);
}
}


