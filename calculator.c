#include <stdio.h>
#include <math.h>
int choice(int e, int f);
int main()
{
	float a,b,c;
	printf("Enter the value for a and b: \n");
	scanf("%f %f",&a, &b);
	c = choice(a,b);
	printf("The result is %f \n", c);
	main();
	return 0;
}
int choice(int e, int f)
{
	char oper;
	int d;
	puts("\t Menu");
	puts("press + for Addiotion");
	puts("press - for Substraction");
	puts("press * for Multiplication");
	puts("press / for Division");
	puts("press ^ for Power");
	puts("press @ for Square Root");
	
	puts("Select your choice :");
	fflush (stdin);
	oper=getchar();
	switch(oper)
	{
		case '+':
			return d=e+f;
			break;
		case '-':
			return d=e-f;
			break;
		case '*':
			return d=e*f;
			break;
		case '/':
			return d=e/f;
			break;
		case '^':
			return d= pow(e,f);
			break;
		case '@':
			return d= sqrt(e);
			break;
		default:
			printf("Please enter a valid choice \n");
			choice(e,f);	
	}
}





