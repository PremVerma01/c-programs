#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the three angles for triangle");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c)
    {
        printf("this is equilateral triangle");
    }
    else if(a==c && b>a)
    {
        printf("this is isoceles triangle");
    }
    else
    printf("triangle is scalen triangle");
}