#include<stdio.h>
int main(){
	int N,rep;
	int a[10]={0};
	printf("enter number");
	scanf("%d",&N);
	while(N>0){
	   rep=N%10;
	if(a[rep]==1)
	break;
	
	a[rep]=1;
	N=N/10;
	

	}
     
    if(N>0)
    printf("yes");
    else
    printf("no");
}
