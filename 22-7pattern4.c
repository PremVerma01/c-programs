#include<stdio.h>
int main()
{
	int i,j,n,k=1;
	printf("enter number");
	scanf("%d",&n);
	for (i=1;i<=4;i++)
	{
		for(j=1;j<=5;j++)
		{
//			if(n%2==0){
//				printf(" ")
//			}
//			else
			printf("%d",k);
			k+=2;
		}
	printf("\n");
	}
}
