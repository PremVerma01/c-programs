#include<stdio.h>
int main(){
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((j+i)%2==0)
			{
			 printf("0");	
			}
			else
			{
				printf("1");
			}
				
		}
			printf("\n");
	}
		
}
