#include<stdio.h>
int main(){
	int a[100],j,i,t,n;
	
	printf("enter the size of an array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("entr the elements");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%4d",a[i]);
}
