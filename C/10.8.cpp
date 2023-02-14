#include<stdio.h>
#include <string.h>

int main(){
int  length;
char matrix[3][10],arr[100];
	
	printf("Enter string:");
	gets(arr);
	
	printf("%s",arr);
	
	
	  

	for(int i=0;i<length;i++){
	length=strlen(arr);
	if(arr[i]!=' '){
	length=strlen(arr);
	printf("%d",strlen(arr));
	}
	}
	return 0;
}
