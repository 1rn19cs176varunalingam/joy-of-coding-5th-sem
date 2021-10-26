#include<stdio.h>
#include<string.h>
void main()
{
	char a[20],b[20],c[20];
	
	int flag=0,k;
	char l;
	printf("enter a string 1:\n");
	scanf("%s",a);
	printf("enter a string 2:\n");
	scanf("%s",b);
	for(int j=0;j<strlen(b);j++)
		{
			if(a[0]==b[j])
			k=j;
		}
	for(int j=k;j<strlen(a);j++)
{
c[l++]=b[j];
}
for(int i=0;i<k;i++)
c[l++]=b[i];
for(int j=0;j<strlen(b);j++)
		{
			if(a[j]!=c[j])
			flag=1;
		}
if(flag=0)
printf("the strings are rotated\n");
else
printf("the strings are not rotated\n");
}



			
