#include<stdio.h>
int main(){
	int i,j,n,m,a[10][10];
	 printf("enter the rows and column");
	 scanf("%d %d",&n,&m);
	 printf("enter the elements");
	 for(i=0;i<n;i++)
	 {
	 for(j=0;j<m;j++)
	 	{
		printf("enter the elements for a[%d][%d]",i,j);
	 	scanf("%d",&a[i][j]);	
	    }
	 }
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<m;j++)
	 	{
	 	printf("%4d",a[i][j]);	
	    }
	    printf("\n");
	 }
	 getch();
}

