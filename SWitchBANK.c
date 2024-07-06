#include<stdio.h>
int main(){
	
    char pro;
    int tamt=10000,amt;
	printf("you want to withdrawl or deposit\nfor withdrawl press w for deposit press d");
	scanf(" %c",&pro);
	   
	  switch(pro) // +
	     {
	     case 'd':	
		printf("how much ammount you want to deposit");
		scanf("%d",&amt);
		if(amt>=1)
	     	{
		
		tamt=amt+10000;
		printf("your total amount is %d",tamt);
           	}
           	else
			   {
			   	printf("this amount cant store");
			   }
      	}
		switch(pro)
		  {
		  	case 'w':
			printf("how much ammount you want to withdraw");
		
		scanf("%d",&amt);
		if(amt>=1)
	     	{
		tamt=10000-amt;
		printf("your total amount is %d",tamt);
		     }
		     else
		     {
		     	printf("enter valid number");
			 }
		}
	}
			
	
