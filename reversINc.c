#include<stdio.h>
int main(){
	int i;
	int a[9]={3,54,64,23,45,7,6};
	for (i=0;i<7;i++)
	printf("%d",a[i]);
	printf("\n");
	for(i=6;i>=0;i--)
	printf("%d",a[i]);
}
