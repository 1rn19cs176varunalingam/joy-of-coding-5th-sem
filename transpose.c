#include<stdio.h>
void main()
{
	int a[10][10];
	int b[10][10];
int n,m;
printf("enter the no of rows and no of columns:\n");
scanf("%d%d",&n,&m);
printf("enter the matrix\n");
for(int i=0;i<n;i++)
for(int j=0;j<m;j++)
scanf("%d",&a[i][j]);
printf("the inverted matrix is given by:\n");
for(int i=0;i<n;i++)
for(int k=0,j=m-1;k<m,j>=0;k++,j--)
b[k][i]=a[i][j];
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
printf("%d ",b[i][j]);
}
printf("\n");
}
}




