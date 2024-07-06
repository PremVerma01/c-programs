#include<stdio.h>
int main(){
	int id,pw,chk;
	
	printf("1st enter your id");
	scanf("%d",&id);
	printf("2nd enter your pw ");
	scanf("%d",&pw);

	 chk=id==1 && pw==324;
	switch(chk)
	{
		case 1:
			printf("well come here");
			break;
		
		case 0:
			printf("enter valid user id and pw");
			break;
	    
			
	}
         
}
