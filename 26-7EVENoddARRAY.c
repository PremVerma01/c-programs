#include<stdio.h>
int main(){
	int a[100],i,n;
	printf("enter the size of an array between 1-100\n");
	scanf("%d",&n);
	printf("enter the elements to check odd number\n");
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 	
	 	if(a[i]%2==0){
	 		printf(" even :- %d\n",a[i]);
	 	}
	 	else
		 {
		 	printf("odd:-%d\n",a[i]);
		 }	
		 }
	 }

