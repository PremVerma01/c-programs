#include<stdio.h>
int main(){
	int  id,a,b,c,d,e,f,avg,total;
	char name;
	float per;
	printf("Enter your name ");
	scanf("%s",&name);
    
	printf("Enter your id ");
	scanf("%d",&id);
    
	printf("Enter your six subject marks ");
	scanf("%d%d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	total=a+b+c+d+e+f;
	printf("%d\n",total);
	
	avg=total/6;
    printf("%d\n",avg);						// int a = 5; float b = a/2;
    
	per=((total/600.0)*100.0);
	printf("%2f percent you got\n",per);
	if(avg<600){
	
	if(per>75)
	{
		printf("hurreeeyy!!!!you got distiction\n");
	}
	else if(per>=60 && per<=74)
	{
			printf("heyyy!!!! 1st division\n");
	}
	else if(per>=50 && per<=59)
	{
			printf("heyyy!!!! 2nd division\n");
	}
	else if(per>=35 && per<=49)
	{
			printf("heyyy!!!! 3rd division\n");
	}
     else if(per<=35)
	{
			printf("opssss!!! sorryy you are fail\n");
	}
  }  
  else
  {
  	printf("enter valid numbers");
  }
  
  printf("Id   name   total   avg \n ");
  printf("%d   %c      %d      %d    ",id,name,total,avg);
	
}
