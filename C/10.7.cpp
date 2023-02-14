#include<stdio.h>

void mult(int a[30][30],int b[30][30],int size);

int main(){
	
	int N,A[30][30],B[30][30];
	
	do{
	printf("Enter N value:");
	scanf("%d",&N);
	}while(N>30 || N<0);
	
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			printf("Enter array:");
			scanf("%d",&A[i][j]);
		}
	
	}
	
	
		
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			printf("Enter array:");
			scanf("%d",&B[i][j]);
		}
	}
	
	
	mult(A,B,N);
	return 0;
	}
	
	
	
	void mult(int a[30][30],int b[30][30],int size){
		
		int result[size][size];
		
		for(int i=0;i<size;i++){
			for(int j=0;j<size;j++){
				result[i][j]=a[i][j] * b[i][j];
			}
		printf("\n");
		}
		
		
		
		for(int i=0;i<size;i++){
			for(int j=0;j<size;j++){
				printf("%d  ",result[i][j]);
			}
		printf("\n");
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
