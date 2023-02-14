#include<stdio.h>


int f_reverse(int a[4][4]);


int main(){
	
	int arr[4][4];
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
		printf("Enter 16 number:\n");
		scanf("%d",&arr[i][j]);
		}		
	printf("\n");
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
		printf("%d  ",arr[i][j]);
		}		
	printf("\n");
	}
	
	
	
	
		f_reverse( arr );
	
	
	return 0;
}


int f_reverse(int a[4][4]){
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
		printf("%d  ",a[j][i]);
		}		
	printf("\n");
	}
	
}
