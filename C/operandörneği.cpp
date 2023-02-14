#include<stdio.h>
int result[30];

int mult(int N,int a[],int b[],int result[]){
for(int i=0;i<N;i++){
result[i]=a[i] * b[i];

}
}




int main(){
	char char1;
	int N;
	do{
	printf("Enter array size:\n");
	scanf("%d",&N);

	}while(N>30 ||N<0);
	
int arr1[N],arr2[N];	

for(int i=0;i<N;i++){
	printf("Enter first arrays %d. array element:\n ",i+1);
	scanf("%d",&arr1[i]);	
}
	
	for(int i=0;i<N;i++){
	printf("Enter second arrays %d. array element:\n ",i+1);
	scanf("%d",&arr2[i]);	
}

	printf("Enter the operand:\n");
	scanf(" %c",&char1);
	
	
	
	if(char1=='*')
	{
		mult(N,arr1,arr2,result);
	for(int i=0;i<N;i++){
	printf("%d\n",result[i]);}
	}
	
	
	return 0;
	
}
