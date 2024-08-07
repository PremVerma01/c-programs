#include<stdio.h>
int main(){
	int i,n,a[100];
	printf("enterthe size of an array");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
		printf("%d",a[n-1]);
		
		for(i=0;i<n;i++)
	{
		if(a[i]==a[n-1])
		{
			printf("%c ",' ');
		}
		else
		{
			printf("%d",a[i]);
		}
	}
}
