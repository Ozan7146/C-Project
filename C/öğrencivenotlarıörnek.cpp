#include<stdio.h>

int main(){
	int i;
	printf("Enter the nuber of student in the class:\n");
	scanf("%d",&i);

	int st_id[i],scores[i];
	
	for(int j=0;j<i;j++){
		printf("Enter %d. student number:",j+1);
		scanf("%d",&st_id[j]);
		
		
	}
		
		for(int j=0;j<i;j++){
		printf("Enter %d. score:",j+1);
		scanf("%d",&scores[j]);
		
		
	}
	for(int j=0;j<i;j++){
	if(scores[j]<=80 && 70<=scores[j])
	printf("%d",st_id[j]);
	}	
	
	
	
	return 0;
}
