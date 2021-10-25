#include<stdio.h>
void main()
{
int a[10];
int sum=0,s=0;
int n;
printf("enter the no of elements in the array:\n");
scanf("%d",&n);
printf("enter the elements:\n");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the sum:\n");
scanf("%d",&sum);
for(int i=0;i<n;i++)
{
s=a[i];
if(sum==a[i])
{
printf("sum present at index %d",i+1);
break;
}
for(int j=i+1;j<n;j++)
{
s=s+a[j];
if(sum==s)
{
printf("sum present at indices %d to %d",i+1,j+1);
break;
}
}
}
}
