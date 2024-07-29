#include<stdio.h>
int main(){
	int i,r,a[100],n,c,j;
	printf("enter the size of an array 1-100\n");
	scanf("%d",&n);
   	printf("enter the %d elements of an array\n",n);
   	for(i=0;i<n;i++)
   	{
   		   scanf("%d",&a[i]);
	}for(i=0;i<n;i++)
   	{
   	
	for(c=0,j=1;j<=a[i];j++)
	{
	  if(a[i]%j==0)c++;	
	}
	printf("%d is ",a[i]);
	puts(c==2?"prime":"composite");
	last : ;
    }
}
