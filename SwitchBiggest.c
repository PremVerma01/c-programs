#include<stdio.h>
int main(){
	int a,b;
	printf("enter numbers to find biggest");
	scanf("%d %d",&a,&b);
	int ans=a>b;
	 switch(ans)
	 {
	 	case 1:
	 	printf("a is big");
	 	
	 	case 0:
	 	printf("b is big");
	 }
}
