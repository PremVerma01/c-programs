	#include<stdio.h>
int main(){
	int a,b,c,d,e,f,total;
	printf("enter numbers to  see your grade");
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);

     total=a+b+c+d+e+f;
      float avg=total/6.0;
	 switch((int)avg/10)
	 {
	 	
	 	case 9:
	 	printf("a grade");
	 	break;
	 	case 8:
	 	printf("b grade");
	 	break;
	 	case 7:
	 	printf("c grade");
	 	break;
	 	case 6:
	 	printf("d grade");
	 	break;
	 	case 5:
	 	printf("e grade");
	 	break;
	 	case 4:
	 	printf("f grade");
	 	break;
	    case 3:
	 	printf("fail");
	 	break;
	 	case 2:
	 	printf("fail");
	 	break;
	   case 1:
	 	printf("fail");
	 	break;
	 }
}
