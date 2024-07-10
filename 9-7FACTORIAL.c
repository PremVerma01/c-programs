#include<stdio.h>
int main(){
	int i=1,n,fac=1;
	printf("enter");
	scanf("%d",&n);
	while(i<=n)
	{
	 fac=fac*i;
	 i++;
	}
	printf("%d",fac);
}
