#include<stdio.h>
int main()
{
	int i,j,n,a[100],k=0;
	printf("entr the size of an array");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
			{
			a[k]=a[i];
			k++;
			}
	}

	for(i=k;i<n;i++)
	{
		a[i]=0;
	}
	for(int l=0;l<n;l++){
	
		printf("%d",a[l]);
	}
//	for(int l=0;l<k;l++){
//	
//		printf("%d",a[l]);
//	}
}

