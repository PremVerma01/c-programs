#include<stdio.h>
int main(){
	int i,n,j,a[100];
	printf("enter the size of an array between 1-100");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<=n-1;j++)
		{
			if(a[i]+a[j]==15)
          {
          	printf("(%d,%d)",a[i],a[j]);
	      }
	      
		}
		 
	   	
		 
	}
	printf("no match found"); 
    
}
