#include<stdio.h>
int main(){
	int a[100],i,n,sum=0;
	printf("entr the size of n array");
	scanf("%d",&n);
	printf("enter the elements");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	
	for(i=0;i<n;i++)
		{
			sum=sum+a[i];
		}
		printf("%d",sum);
}
