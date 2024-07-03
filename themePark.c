#include<stdio.h>
 int main()
 {
	
	int age;
	char pass,y;
	float hei;
	printf("enter the age");
	scanf("%d",&age);
	
    printf("enter the height");
	scanf("%d",&hei);
	
    printf("do you have vip pass ? press y or n");
	scanf(" %c",&pass);
	

	if(age>=1 && age<=3)
      {
      	printf("hureyy!! your ticket is free\n");
	  }
  else if(age>=4 || age<=12 )
	   {
	   	if(hei>=180)
	       {
	         	printf("pay extra 50 rupee\n");
	       }
	    if(hei<=120)
		   {
		   	printf("you will get 50 discount\n");
		   }
		 if(pass=='y')
		 {
		 	printf("you will get 10 more discount\n");
		 } 
	   	printf("your have to pay 20\n");
	   }
  else if( age>=13 && age<=64)
	    {
	   	if(hei>=180)
	       {
	         	printf("pay extra 50 rupee\n");
	       }
	    if(hei<=120)
		   {
		   	printf("you will get 50 discount\n");
		   }
		if(pass==y)
		 {
		 	printf("you will get 10 more discount\n");
		 } 
	  	printf("you have to pay 100\n");
		}
     else if( age<=65)
	    {
	    	
	   	if(hei>=180)
	       {
	         	printf("pay extra 50 rupee\n");
	       }
	    if(hei<=120)
		   {
		   	printf("you will get 50 discount\n");
		   }
		 if(pass=='y')
		 {
		 	printf("you will get 10 more discount\n");
		 } 
	    	printf("you have to pay 50\n");
		}
	return 0;	
}   

