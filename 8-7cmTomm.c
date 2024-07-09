#include<stdio.h>
int main(){
	float m,mt; 
	int p;
	printf("1.Meters to Kilometers\n2.Kilometers to Meters\n3.Centimeters to Meters\n4.Meters to Centimeter\n");
    printf("press 1 to 4");
    scanf("%d",&p);
    if(p>=1 && p<=4){
	
    switch(p)
    {
    	case 1:printf("enter the meter to know how much km");
		scanf("%f",&m);
		mt=0.001*m;
		printf("%f is answer",mt);
		break;
	    case 2:printf("enter the kilo meter to know how much m");scanf("%f",&m);mt=1000*m;printf("%f is answer",mt);break;
	    case 3:printf("enter the centimeter to know how much m");scanf("%f",&m);mt=0.01*m;printf("%f is answer",mt);break;
	    case 4:printf("enter the meter to know how much cm");scanf("%f",&m);mt=100*m;printf("%f is answer",mt);break;
	    default:printf("enter valid number ");
	}
              }
              else
              {
              	printf("enter valid number ");
			  }
}    
