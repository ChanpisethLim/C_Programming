#include <stdio.h>
main()
{
	char chc;
	float a,b,c,delta;
	puts("+ for Addiction");
	puts("- for Substraction");
	puts("* for Multiplication");
	puts("/ for Division");
	puts("$ for findind the delta");
	puts("Select your choice :");
	fflush (stdin);
	chc = getchar();
	printf("Enter the value for a :");
	scanf("%f",&a);
	printf("Enter the value for b :");
	scanf("%f",&b);
	switch(chc)
	{
		case '+' :
			c=a+b;
			printf("The answer is %f",c);
			break;
		case '-' :
			c=a-b;
			printf("The answer is %f",c);
			break;
		case '*' :
			c=a*b;
			printf("The answer is %f",c);
			break;
		case '/' :
			c=a/b;
			printf("The answer is %f",c);
			break;
		case '$':
			printf("Enter the value for c :");
			scanf("%f",&c);
			delta=b*b-(4*a*c);
			printf("The answer of delta is %f",delta);
			break;
		default :
			puts("Syntax Error");
	}
}

