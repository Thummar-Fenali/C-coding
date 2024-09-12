#include<stdio.h>

main()
{
	
	int row,col;
	
	printf("Enter the number :",row);
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
			printf("Enter a[%d][%d]",i,j);






			scanf("%d",&a[i][j]);
		}
		
        printf("\n");
	}
	 



	printf("\n\n Array Output \n\n");
	
	int lan=0;
	
	for(i=0; i<row; i++)
	{




			for(j=0; j<col; j++)
			{
				if(a[i][j]>lan)



				
				{
					lan=a[i][j];
				}






			}
			
	}
	printf("lan number is %d",lan);
}
