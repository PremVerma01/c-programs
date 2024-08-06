#include<stdio.h>
int main()
{
	int i,j,n,a[i];
	printf("entr the size of an array");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	int k=0;
	for(i=0;i<n/2;i++)//5->2
	{
		
		for(j=n-i-1;j==n-i-1;j--)
		{

		printf("(%d %d)\n",a[i],a[j]);
		}		
	}
	if(n%2!=0)
	{
		printf("(%d)",a[i]);
	}
}
