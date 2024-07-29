#include<stdio.h>
int main(){
	int a[100],i,n;
	printf("enter the size of an array between 1-100\n");
	scanf("%d",&n);
	printf("enter the elements to check odd number\n");
	 for(i=0;i<n;i++)
	   {
	 	scanf("%d",&a[i]);
	 	}
	 	 
	  printf("\neven number are\n")	;
	  for(i=0;i<n;i++)
	  {
	  	if(a[i]%2==0)
		  {
	 		printf("  %d",a[i]);
	      }
       }
	  printf("\nodd number are\n")	;
	  for(i=0;i<n;i++)
	  {
	  	if(a[i]%2!=0)
		  {
	 		printf("  %d",a[i]);
	      }
	  }
}

