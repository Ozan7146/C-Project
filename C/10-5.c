#include<stdio.h>


int main(){
	int N,i,j,temp;
	printf("Enter number:");
	scanf("%d",&N);
	int arr[N][N];
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
		printf("Enter N*N array: \n");
		scanf("%d",&arr[j][i]);							
		}
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
		printf("%d",arr[i][j]);
						
		}
	printf("\n");
	}
					temp=arr[0][0];
					arr[0][0]=arr[0][N-1];
					arr[0][N-1]=temp;				
					arr[N-1][0]=temp;
					arr[N-1][0]=arr[N-1][N-1];	
					arr[N-1][N-1]=temp;	
		for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
		printf("%d",arr[i][j]);			
		}
	printf("\n");
	}
	return 0;
}
