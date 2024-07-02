#include<stdio.h>
int main(){

    int a,b;
    char c;

    printf("if you are an indian type I ");
    scanf(" %c",&a);
    if(a=='I' || a=='i')
    {
        printf("confirmed your are india\n");
        printf("enter you are m or f");
    scanf(" %c",&c);
    printf("enter you age");
    scanf("%d",&b);
        
    if("b>18 &&b<45 || b>21 || b<50")
    {
        printf("hurreeyyy!! you are eligible for marriage");
    }
    else{
        printf("you are not eligible");
    }
    }
    else{
        printf("sorry you are not eligible\n");
    }
   
    
}