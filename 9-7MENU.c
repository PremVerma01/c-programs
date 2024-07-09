#include<stdio.h>
int main(){
	int sel,t,q,f,v;
	vf:
	printf("1 for fruit\n2for veggies\n3 for exit\n");
	scanf("%d",&sel);
	switch(sel)
	{
		case 1:
			printf("fruits\n1.apple=10/-\n2.bnana=10/-\n3.orange=20/-\n");
			printf("presss 1.apple \n2.bnana\n 3.orange\n");
			scanf("%d",&f);
		          switch(f)
		          {
		          	case 1:printf("enter the quantity");scanf("%d",&q);t=10*q;printf("BILL%d you have to pay for this",t);break;
		          	case 2 : printf("enter the quantity");scanf("%d",&q);t=10*q;printf("BILL%d you have to pay for this",t);break;
		          	
		          	case 3 :printf("enter the quantity");scanf("%d",&q);t=20*q;printf("BILL%d you have to pay for this",t);break;
		          	
		          	default :printf("enter  valid number");break;
		          		
				  }
				  
		case 2:
			printf("vegetables\n1.tomato=10/-\n2.potato=12/-\n3.onion=6/-");
			printf("presss 1.tomato \n2.potato\n 3.onion\n");
			scanf("%d",&v);
			
		          switch(v)
		          {
		          	case 1:printf("enter the quantity");scanf("%d",&q);t=10*q;printf("BILL\n%d you have to pay for this",t);break;
		          	case 2: printf("enter the quantity");scanf("%d",&q);t=12*q;printf("%d you have to pay for this",t);break;
		          	
		          	case 3:printf("enter the quantity");scanf("%d",&q);t=6*q;printf("BILL\n%d you have to pay for this",t);break;
		          
		          	default :printf("enter  valid number");break;
				}
		case 3:return;
		default:printf("enter valid number");
	}
	goto vf;
}
