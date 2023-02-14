#include<stdio.h>



int main(){
		
	int N;
	
	do{	
	printf("Enter array size:\n");
	scanf(" %d",&N);	
	}while(0>=N || 30<N);
	
	int arr[N][N];
	int i,j;

for( i=0;i<N;i++)	
	{
		for( j=0;j<N;j++){
		
		printf("Enter %d.row and %d.column:\n",i+1,j+1);
		scanf("%d",&arr[j][i]);
	}
	}
	for( i=0;i<N;i++)				
	{
		for( j=0;j<N;j++){
		
		printf(" %d",arr[i][j]);
		
	}
	printf("\n");
	}
	
	
	
	
	
	
	
	return 0;
}
