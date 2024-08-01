#include<stdio.h>
int main(){
	int a[100],n,min=0,i,j,max=0;
	printf("entr the size of an elements");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);
	 if(min>a[i]){
	 	min=a[i];
	 if(max<a[i])
	  {
	 	max=a[i];
	  }
	 }  
	}
		printf("%d",min);	
	}


