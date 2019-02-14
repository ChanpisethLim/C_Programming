#include <stdio.h>
main()
{
	char chc;
	float a,b,c;
	puts("+ for Addiction");
	puts("- for Substraction");
	puts("* for Multiplication");
	puts("/ for Division");
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
		default :
			puts("Syntax Error");
	}
}

