#include<stdio.h>
#include<math.h>


void carp(int A[30][30],int B[30][30],int N){
int i,j,C[N][N];
for(i=0;i<N;i++){
	for(j=0;j<N;j++){
	printf(	"%d", C[N][N]=A[30][30]*B[30][30]);
		
		}
printf("\n");
}






}


int main(){
int N,A[30][30],B[30][30],C[30][30],i,j;

do{
printf("Enter array size:\n");
scanf("%d",&N);
	
}while(N>30 || 0>=N);


for(i=0;i<N;i++){
	for(j=0;j<N;j++){
		printf("Enter A's matriks number:");
		scanf("%d",&A[i][j]);	
		
	     }	
}

for(i=0;i<N;i++){
	for(j=0;j<N;j++){
		printf("Enter B's matriks number:");
		scanf("%d",&B[i][j]);	
		
	     }	
}
	
	
carp(A,B,N);	
	
	
return 0;
}
