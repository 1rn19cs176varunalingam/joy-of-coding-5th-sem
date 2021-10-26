#include<stdio.h>
#include<string.h>
void main()
{	
	char ch[20],a[20];
	int c=0;
	printf("enter a string:\n");
	scanf("%[^\n]%*c",a);
	for(int i=0;i<strlen(a);i++)
		{
			if(a[i]==' ')
				{
					ch[c]==a[i+1];
					c++;
				}
		}
	printf("The abbreviaton of the string is: %[^\n]%*c \n",ch);
}
