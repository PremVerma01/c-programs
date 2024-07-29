#include<stdio.h>
int main(){
	int i,r,a[100],n;
	printf("enter the size of an array 1-100\n");
	scanf("%d",&n);
   	printf("enter the %d elements of an array\n",n);
   	for(i=0;i<n;i++)
   	{
   		printf("element - %d: ",i);
   		   scanf("%d",&a[i]);
	}
	printf("Elements in array are:");
    for(i=0;i<n;i++)
   	{
     	printf("%d ",a[i]);
     }
	 }

