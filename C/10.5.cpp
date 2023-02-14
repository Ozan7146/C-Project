#include<stdio.h>

int main(){
	
	int N,arr[30][30],new1[30][30];
do{
	printf("Enter N value (1-30):\n");
	scanf("%d",&N);
}while(0>=N || N>30);


for(int i=0;i<N;i++){
	for(int j=0;j<N;j++)
{
	printf("Enter %d.row %.d column:    ",i+1,j+1);
	scanf("%d",&arr[j][i]);
}	
}
	
	
for(int i=0;i<N;i++){
	for(int j=0;j<N;j++)
{     		
		printf("%d  ",arr[i][j]);
	}
		printf("\n");
		}


printf("\n");


for(int i=0;i<N;i++){
	
int temp;    	

	temp=arr[i][i];
arr[i][i]=arr[i][N-(i+1)];
	arr[i][N-(i+1)]=temp;
		printf("%d  ",arr[i][i]);

			}
















	return 0;
}
