#include<stdio.h>
#include<string.h>

int main(){
	
	
	
	
	int *p;
	char arr[30];
	printf("Enter string");
	gets(arr);
	
	
	p=strtok(arr," ");
	
	while(p!=NULL){
			p=strtok(arr," ");
		
		
	}
	
	
	
	
	return 0;
	
}
