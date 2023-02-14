#include<stdio.h>

int main(){
	
	int arr[5][5];
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("Enter %d.row %d.column number:",i+1,j+1);
			scanf("%d",&arr[i][j]);
			
		}
	}
	
		
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d    ",arr[i][j]);
			
		}
		printf("\n");
	}
	
	
		
		
		for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(arr[i][j]==0)
			{
				printf(" ");
			}
			else
			printf("%d   ",arr[i][j]);	
		
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
