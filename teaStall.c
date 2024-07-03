#include<stdio.h>
int main(){
	int item,tea,qua ;
	printf("WELL COME TO OUR CAFE\Nfor Tea 10\nfor cofee 20\nfor cold cofee 50 ");
	
	printf("press 1 for tea\npress 2 for coffee\npress 3 for cold coffee");
	scanf("%d",&item);

	printf("give me the quantity");
	scanf("%d",&qua);

	
	if(item==1)
	{
		tea=qua*10;
		printf("thank you");
	}
	else if(item==2)
	{
		tea=qua*20;
		printf("thank you");
	}
	else if(item==3)
	{
		tea=qua*50;
		printf("thank you");
	
    }


	printf("\nDear your total bill is %d  ",tea);
}
