#include<stdio.h>

int main(){
	
	int st_id[1000],scores[1000];
	int N,i;
	printf("enter N:");
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		
		printf("Enter %d.student id:\n",i+1);
		scanf("%d",&st_id[i]);
	
	}
	
	
	
	return 0;
}
