#include<stdio.h>
void func(int a,int arr[30],int b[30]){
	
int i,j,counter=0;	
for(i=0;i<a;i++){
	for(j=0;j<a;j++)
	{
		if(arr[i]==b[j])
	{
			counter++;		
	}
		
	}
	printf("%d occurrs %d time",arr[i],counter);
	}
	
	}



int main(){
	int i,N,res[100],occ[100];
	
	printf("Enter number 1-30:\n");
	scanf("%d",&N);
	while(N>30 || N<1){
	printf("Enter number 1-30");
	scanf("%d",&N);
					  }
	
	for(i=0;i<N;i++){
		printf("enter a number:\n");
		scanf("%d",&occ[i]);
	res[i]=occ[i];
	}
	
	func(N,occ,res);
	
		
	return 0;
}
