#include<stdio.h>
int main(){
    int num,a,b,tc,d,e;
    char name[30];
    printf("enter you name ");
    scanf(" %s",name);
    printf("enter you num");
    scanf("%d",&num);
    printf("how many wheeler vahical you have ");
    scanf("%d",&a);
    if(a>=2 && a<=4)
    {
        printf("ok we are ready for your vehical\n");
         printf("enter the age of your vahical in month");
         scanf("%d",&b);
         if(b>8)
         {
             printf("we are ready");
             printf("enter Enter 1 for tyre problem\n 2)Enter 2 for fuel problem\n 3)Enter 3 for engine issue \n4)Enter 4 for general services");
             scanf("%d",&d);
             if(d==1) 
             {
                 printf("how many tyres you are facing problem");
                 scanf("%d",&e);
                 tc=e*400;
                 printf("%d",tc);
             }
                 else if(d==2)
                 {
                 printf("you have fuel problem you have to pay 1500");
                 }
                 else if(d==3)
                 {
                 printf("you have engine problem you have to pay 5000");
                 }
                 else if (d==4)
                 {
                 printf("you have general problem you have to pay 1000");
                 }
             }
         
         else
         {
             printf("sorry it will happend after 8 month completed");
         }
    
     }else
     {
     printf("sorrry!!! we are not ready for your vehical");   
      }
      //return 0;
      printf(" \nBILL\nsir %s\nnumber=%d\nour total cost is %d",name,num,tc);
    }