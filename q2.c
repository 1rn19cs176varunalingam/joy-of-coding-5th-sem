#include<stdio.h>
#include<string.h>
void main()
{	
	char a[20];
	int ch[24];
	int c=0,max=0,k;
	char l;
	printf("enter a string:\n");
	scanf("%[^\n]%*c",a);
	for(int i=0;i<strlen(a);i++)
		{
			ch[((int)a[i])-97]++;
		}
	for(int i=0;i<24;i++)
		{
			if(ch[i]>max)
			{
			max=ch[i];
			k=i;
			}
		}
	l=(char)(k+97);
	printf("the character printed many times is %d and the freq is %d \n",l,max);
}
