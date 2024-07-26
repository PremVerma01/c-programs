#include <stdio.h>
int main() {
    int a=1;
    int j,i;
  for(i=0;i<5;i++)
    {
      for( j=1;j<=i;j++)
        {
            printf("%3d",a++);
        
         }  
        a=j;
         printf("\n");
    }
    return 0;
}
