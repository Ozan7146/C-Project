#include<stdio.h>



int main(){
	int N,arr[N];
do{
printf("Enter N value:");
scanf("%d",&N);

}while(N>30 || N<=0);	

for(int i=0;i<N;i++){
	do{
	
	printf("Enter %d. points:",i+1);
	scanf("%d",&arr[i]);
		}while(100<arr[i] || 0>arr[i]);
	
}



	
	
return 0;
}
