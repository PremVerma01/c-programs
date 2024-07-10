#include<stdio.h>
int main(){
	int i=1,n,es=0,os=0;
	printf("enter");
	scanf("%d",&n);
	while(i<=n)
	{
	 if(i%2==0)
	  es=es+i;
	  else
	  os=os+i;
	 i++;
	}
	printf("%d is even sum\n %d is odd sum",es,os);
}
