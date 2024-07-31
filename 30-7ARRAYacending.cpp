#include<stdio.h>
int main(){
	int i,n,a[n],t,j;
	printf("enter the size of an array");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-2;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	
	}
		for(i=1;i<n;i++)
		{
			printf("%d",a[i]);
		}
}
