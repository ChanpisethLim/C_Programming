#include <stdio.h>
main()
{
	int i,j,rf,cf,rs,cs,first[30][30],second[30][30],sub[30][30];
	puts("Enter the number of row and column for first matrix : ");
	scanf("%d%d",&rf,&cf);
	puts("Enter the value for the first matrix : ");
	for(i=0;i<rf;i++)
		for(j=0;j<cf;j++)
		{
			printf("R%d , C%d : ",i+1,j+1);
			scanf("%d",&first[i][j]);
		}
	puts("");
	
	for(i=0;i<rf;i++)
	{
		for(j=0;j<cf;j++)
		{
			printf("%d\t",first[i][j]);
		}
		puts("");
	}
	
	puts("\nEnter the number of row and column for the second matrix : ");
	scanf("%d%d",&rs,&cs);
	if( rf!=rs || rf!=cs || cf!=rs || cf!=cs )
	printf("\nThis matrix can not substract.");
	else
	{
		puts("Enter the value for the second matrix : ");
		for(i=0;i<rs;i++)
			for(j=0;j<cs;j++)
			{
				printf("R%d , C%d : ",i+1,j+1);
				scanf("%d",&second[i][j]);
			}
		puts("");
		
		for(i=0;i<rs;i++)
		{
			for(j=0;j<cs;j++)
			{
				printf("%d\t",second[i][j]);
			}
			puts("");
		}
		
		puts("\n------------The answer is : ");
		
		for(i=0;i<rs;i++)
		{
			for(j=0;j<cs;j++)
			{
				sub[i][j]=first[i][j]-second[i][j];
				printf("%d\t",sub[i][j]);
			}
			puts("");
		}
	}
}
