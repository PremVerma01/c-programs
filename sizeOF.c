#include<stdio.h>
int main(){
	int size;
	int a[]={1,3,4,5,5,3,3,4,5,7,5,4,3,3,5,5,7,89,9,7,5,4,4,5,6,7,7,7,6,5,2,1,1,2,4};
	 size=sizeof(a)/sizeof(a[2]);
	 printf("%d",size);
}
