#include<stdio.h>
#include<string.h>


int main(){
	
	char arr[25];
	int a;
	printf("Please enter the line:\n");
	gets(arr);

for(int i=0;i<25;i++){
	
	if(arr[i]==' '){
	arr[i]='*';
}
}
		
	
	
	
printf("%s",arr);
	return 0;
}
