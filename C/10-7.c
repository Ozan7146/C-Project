#include<stdio.h>

void mult(int size,int a[30][30],int b[30][30])
{
	int result[30][30];
	int i,j;
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{	
			result[i][j]=a[i][j]*b[i][j];
			printf("%d",result[i][j]);
		}
	}

}



int main(){
	
	int N,A[30][30],B[30][30],i,j;
	do{
		
		printf("Enter N value:");
		scanf("%d",&N);
	}while(N>30);
	
	printf("Enter matrix A\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			scanf("%d",&A[i][j]);
			
		}
	}
	
		printf("Enter matrix B\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			scanf("%d",&B[i][j]);
			
		}
	}
	
	
	mult(N,A,B);
	return 0;
}
