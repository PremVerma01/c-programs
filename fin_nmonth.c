#include<stdio.h>
int main(){
    int a,month;

printf("enter month to know the number of days");
scanf("%d",&a);
if(a>=1 && a<=12){
if(a==2) 
{
    printf("if this is leap year so it will 29 otherwise 28");
    
}
if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
{
    printf("total  number of days are 31");

}
else{
    printf("this month have 30 days");
}
}
else{
    printf("enter valid number broo!!!");
}

}