#include<stdio.h>
int main(){
	int sc1,sc2,Big,a,b;
	
	printf("1st enter your number in game");
	scanf("%d",&sc1);
	printf("2nd enter your number in game ");
	scanf("%d",&sc2);
	 Big=a>b;
	switch(Big)
	{
		case 1:
			printf("1st one won the match by this number %d",sc1-sc2);
			break;
	    case 0:
			printf("2nd one won the match by this marks %d",sc1-sc2);
			break;
			
			default :
			printf(" both are equal");
			break;
	}
}
