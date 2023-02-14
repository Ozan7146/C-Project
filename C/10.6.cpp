#include<stdio.h>




int matrix(int a[4][4]){
	
	
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
		{
			printf("%d   ",a[i][j]);
			
		}
		printf("\n");	
	}	
}


int main(){
	int dizi[4][4];
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
		{
			printf("Enter the numbers\n");
			scanf("%d",&dizi[j][i]);	
		}
		printf("\n");	
	}
	
	
	matrix(dizi);
	
	return 0;
          }
