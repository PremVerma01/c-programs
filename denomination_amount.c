#include<stdio.h>
int main(){
 int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,amt;
    // printf("enter the amount");
    scanf("%d",&amt);

    a=amt/500;
    printf("%d",a);
    b=amt%500;
    c=b/100;
     printf("%d",c);
    d=b%100;
    e=d/50;
     printf("%d\n",e);
    f=d%50;
    g=f/20;
     printf("%d\n",g);
    h=f%20;
    i=h/10;
     printf("%d\n",i);
    j=h%10;
    k=j/5;
     printf("%d\n",k);
    l=j%5;
    m=l/2;
     printf("%d\n",m);
    n=l%2;
    o=n/1;
     printf("%d\n",o);
    p=n%1;
}