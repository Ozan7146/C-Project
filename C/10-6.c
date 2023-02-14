#include<stdio.h>
void transpose(int a[4][4]);



int main(){
	int i,j,matrix[i][j];
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Enter the matrix:");
			scanf(" %d",&matrix[i][j]);
			
		}
	}
	transpose(matrix);	
	return 0;
}

void transpose(int a[4][4]){
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",a[j][i]);
		}
	printf("\n");
	}
}
