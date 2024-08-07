#include<stdio.h>
int main(){
	int i,j,n,a[100],t,k;
	printf("entr the size of an array");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the k'the elemets");
	scanf("%d",&k);
	for(i=0;i<=n-2;i++)
	{
	 for(j=i+1;j<=n-1;j++)
	 {
	 	if(a[i]>a[j])
	 	{
	 		t=a[i];
	 		a[i]=a[j];
	 		a[j]=t;
		 }
	 }
	
	}
	 	for(i=0;i<n;i++)
	{
		printf("%4d\n",a[i]);
	}
	
	printf("%d smallest element is %d",k,a[k-1]);
}

		 
