#include<stdio.h>
#include<string.h>
#define length 5 



struct school{
	int id;
	char na_su[50];
	int gpa;
	
	
};

int main(){
	
	struct school student[length];
	for(int i=0;i<length;i++){
	
	printf("Enter student id:\n");
	scanf(" %d",&student[i].id);
	
	printf("Enter student name and surname:\n");
	fgets(student[i].na_su,50,stdin);
	student[i].na_su[strcspn(student[i].na_su,"\n")]='\0'; 
	getchar();

	printf("Enter gpa:\n");
	scanf(" %d",&student[i].gpa);

	}
	
	
	
	for(int i=0;i<length;i++){
		
		
		printf("%d",student[i].id);
		printf("%s",student[i].na_su);
		printf("%d",student[i].gpa);
	}
	
	
	
	
	
	return 0;
}
