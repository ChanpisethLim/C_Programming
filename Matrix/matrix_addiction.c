#include <stdio.h>
main()
{
	int rf,cf,rs,cs,i,j,first[30][30],second[30][30],sum[30][30];
	puts("Enter the row and column for first matrix : ");
	scanf("%d%d",&rf,&cf);
	puts("Enter the value for first matrix : ");
	for(i=0;i<rf;i++)
		for(j=0;j<cf;j++)
		{
			printf("R%d , C%d : ", i+1 , j+1);
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
	
	puts("\nEnter the row and column for the second matrix : ");
	scanf("%d%d",&rs,&cs);
	
	if( rf!=rs || rf!=cs || cf!=rs || cf!=cs )
		printf("\nThis matrix can not plus .");
	else
	{
		puts("Enter the value for second matrix : ");
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
		
		for(i=0;i<rf;i++)
			for(j=0;j<cf;j++)
				sum[i][j] = first[i][j]+second[i][j];
		
		puts("\n-----------The answer is : ");
		for(i=0;i<rf;i++)
		{
			for(j=0;j<cf;j++)
			{
				printf("%d\t",sum[i][j]);
			}
			puts("");
		}	
	}
}	
