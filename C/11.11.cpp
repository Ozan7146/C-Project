#include<stdio.h>

struct grades{
	char name;
	int M1;
	int M2;
	int M3;
	int Final;
	
};




int main(){
	int N;
	printf("Enter students number in the class:");
	scanf("%d",&N);
	
	
	struct grades note[N];
	for(int i=0;i<N;i++){
		
		printf("Enter then Name,M1,M2,M3 and Final grade:");
		scanf("%c %d %d %d %d",&note.name[i],&note.M1[i],&note.M2[i],&note.M3[i],&note.Final[i]);
		
	}
	
	
	return 0;
}
