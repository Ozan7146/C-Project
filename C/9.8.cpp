#include<stdio.h>

int count(int a[],int N);

int main(){
	
	
	int arr[10];
	for(int i=0;i<10;i++){	
	printf("Enter the 10 eleman array:");
	scanf("%d",&arr[i]);
}

printf("%d elemans with 2 digits",count(arr,10));

	
	return 0;
}




int count(int a[],int N){
	int x=0;
	for(int i=0;i<N;i++){
	while(a[i]/10!=0){
		if(a[i]/100==0){
			a[i]=a[i]/10;
			x=x+1;			
		}
				
}
		
		}


return x;
}
