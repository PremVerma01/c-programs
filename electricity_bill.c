#include<stdio.h>
float main(){
    float u,fu,su,tu,fou,sc;
printf("enter the unit ");
scanf("%f",&u);

fu=u*0.50;
su=u*0.75;
tu=u*1.20;
fou=u*1.50;
sc=(u*20)/100;
if(u>=1){
if(u<=50)
printf("%f+%f",fu,sc);
if(u>50&&u<=100)
printf("%f+%f",su,sc);
if(u>100&&u<=200)
printf("%f+%f",tu,sc);
if(u>200&&u<=250)
printf("%f+%f",fou,sc);
}
 else
 {
    printf("enter valid unit");
 }


}