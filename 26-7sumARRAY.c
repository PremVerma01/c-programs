#include<stdio.h>
int main(){
	int a[100],n,i,sum=0;
	printf("enter the size of array between 1-100\n");
	scanf("%d",&n);
	printf("enter the %d elements to sum\n",n );
	
	for(i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		
	}
	printf(" sum is %d",sum);
	
}
