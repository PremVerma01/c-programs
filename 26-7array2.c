#include<stdio.h>
int main(){
	int a[100],n,i;
	 printf("enter the size of an array 1-100\n");
	scanf("%d",&n);
   	printf("enter the %d elements of an array\n",n);
   	for(i=0;i<n;i++)
   	{
   		scanf("%d",&a[i]);
	  }
	printf("enter the number in reverse order:- ");
	for(;n>0;)
	{
		printf(" %d",a[--n]);
	}
}
