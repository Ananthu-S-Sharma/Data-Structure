#include<stdio.h>
int main()
{
int i,n,a[10],s=0;
printf("Enter the limit of array:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)

scanf("%d",&a[i]);

printf("\nArray elemnts are:");
for(i=0;i<n;i++)

printf("%d",a[i]);

for(i=0;i<n;i++)

s=s+a[i];
printf("\n Sum of the elemnts of the array are:%d",s);

return 0;
}

