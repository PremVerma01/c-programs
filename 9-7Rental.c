#include<stdio.h>
int main(){
	
	int c,ca;
	printf("wellcome to prem rental\n1.Sedan - $50\n2.SUV - $70\n3.Hatchback - $40\n4.Truck - $10");
	printf("\nenter the VEHICAL you want ");scanf("%d",&ca);
	
	switch(ca)
	{
		case 1:printf("\nenter the days ");scanf("%d",&c); printf("for SEDAN %d$ is your total amount for %d  days",50*c,c);break;
		case 2: printf("\nenter the days ");scanf("%d",&c);printf("for SUV %d$ is your total amount for %d  days",70*c,c);break;
		case 3:printf("\nenter the days ");scanf("%d",&c); printf("for HATCHBACK %d$ is your total amount for %d  days",40*c,c);break;
		case 4:printf("\nenter the days ");scanf("%d",&c); printf("for TRUCK %d$ is your total amount for %d  days",100*c,c);break;
		default:printf("enter valid number");
	}
}
