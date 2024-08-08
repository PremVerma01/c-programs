#include<stdio.h>
int main(){
	int i,j,a[10][10],r,c,R,C,I,J,b[100][100],c1[100][100];
	printf("enter the rows and column");
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
	{
		
		for(j=0;j<c;j++)
		{
			printf("enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("<<enter rowns and column for second matrix\n");
	printf("enter the rows and column");
	scanf("%d %d",&R,&C);
	for(I=0;I<R;I++)
	{
		for(J=0;J<C;J++)
		{
			printf("enter a[%d][%d]:",I,J);
			scanf("%d",&b[I][J]);
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			c1[i][j]=a[i][j]*b[i][j];
		}
	}
	printf("after multiplication matrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d ",c1[i][j]);
		}
		printf("\n");
	}
	
}

