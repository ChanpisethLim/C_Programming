#include <stdio.h>
#include <math.h>
main()
{
	char chc;
	float a,b,c,delta;
	puts("+ for Addiction");
	puts("- for Substraction");
	puts("* for Multiplication");
	puts("/ for Division");
	puts("^ for power");
	puts("@ for radical calculation");
	puts("$ for findind the delta");
	puts("Select your choice :");
	fflush (stdin);
	chc = getchar();
	switch(chc)
	{
		case '+' :
			printf("Enter the value for a to add b:");
			printf("Enter the value for a: ");
			scanf("%f", &a);
			printf("Enter the value for b: ");
			scanf("%f",&b);
			c=a+b;
			printf("The answer is %f",c);
			break;
		case '-' :
			printf("Enter the value for a: ");
			scanf("%f",&a);
			printf("Enter the value for b: ");
			scanf("%f",&b);
			c=a-b;
			printf("The answer is %f",c);
			break;
		case '*' :
			printf("Enter the value for a: ");
			scanf("%f", &a);
			printf("Enter the value for b: ");
			scanf("%f",&b);
			c=a*b;
			printf("The answer is %f",c);
			break;
		case '/' :
			printf("Enter the value for a to divide b:");
			printf("Enter the value for a: ");
			scanf("%f", &a);
			printf("Enter the value for b: ");
			scanf("%f",&b);
			c=a/b;
			printf("The answer is %f",c);
			break;
		case '^':
			printf("Enter the value for a as main number and for b as the power:\n");
			printf("Enter the value for a: ");
			scanf("%f", &a);
			printf("Enter the value for b: ");
			scanf("%f",&b);
			c=pow(a,b);
			printf("The answer is %f",c);
			break;
		case '@':
			printf("Enter the value for a as the radicand and for b as the degree:\n");
			printf("Enter the value fot a: ");
			scanf("%f", &a);
			printf("Enterh the value for b: ");
			scanf("%f", &b);
			c=pow(a,1/b);
			printf("The answer is %f", c);
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


