#include<stdio.h>
main()
{
	int a,b,op,res;
	puts("Enter number for a:");
	scanf("%d",&a);
	puts("Enter number for b:");
	scanf("%d",&b);
	puts("Calculator's menu");
	puts("1.Addition");
	puts("2.Subtraction");
	puts("3.Multiplication");
	puts("4.Division");
	puts(" ");
	puts("Enter ur calculation choice:");
	scanf("%d",&op);
	
	switch(op){
		case 1:
			res= a + b;
			printf("The answer is:%d",res);
			break;
		case 2:
			res= a-b;
			printf("The answer is:%d",res);
			break;
		case 3:
			res= a*b;
			printf("The answer is:%d",res);
			break;
		case 4:
			res= a/b;
			printf("The answer is:%d",res);
			break;
		default:
			printf("Invalid Choice.");
	}	
}
