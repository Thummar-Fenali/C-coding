#include<stdio.h>

main()
{
	
	int size;
	
	
	printf("Enter the number :");
	
	
	scanf("%d",&size);






	
	int a[size],i;
	
	 printf(" \n\n Array Input \n\n ");





	 
	for(i=0; i<size; i++)
	{
		printf("Entre a[%d] :",i);
		scanf("%d",&a[i]);
	}




	
	printf(" \n\n Array output  \n\n");
	
	for(i=0; i<size; i++)




	{
		if(a[i]<0)




		{
			printf("%d ",a[i]);
		}
	}
}
