#include<stdio.h>
int main(){
	int a[100],i,j,n,t,min;
	printf("enter size of an array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the elements ");
		scanf("%d",&a[i]);
	}
	min = a[0];
	for(i=0;i<=n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\nmin = %d",min);
}
