#include<stdio.h>

main()
{
	int row,col;
	
	printf("Entre the number :",row);
	scanf("%d",&row);




	printf("Enter the number :",col);




	scanf("%d",&col);
	
	int a[row][col];
	int i,j;
	
	printf("\n\n Array Input \n\n");
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("Enter a[%d][%d]= ",i,j);







			scanf("%d",&a[i][j]);
		}
	printf("\n");	
	}
	
	



	printf("\n\n Array output \n\n");
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d",a[i][j]);
		
		}
	printf("\n");	






	}
	
	int r,sum=0;
	
	printf("Enter the number :",r);
	scanf("%d",&r);

	
	
	
	
	
		for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(i==r)
	
	
	
	
	
	
			{
				printf("%d",a[i][j]);
				sum+=a[i][j];
			}
		
		}	
	}
	
	printf("\n sum :%d",sum);
	
	
	int c,rum=0;
	
	printf("Enter the number :",c);
	scanf("%d",&c);
	
		for(i=0; i<row; i++)
	{




		for(j=0; j<col; j++)
		{
			if(i==c)
			{
				printf("%d",a[i][j]);
				sum+=a[i][j];
			}
		
		}	
	}
	



	
	printf("\n sum :%d",sum);
	
}
