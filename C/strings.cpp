#include<stdio.h>
#include<string.h>

int main(){
	
	char arr[]="ozan çelik";
	char arr1[]="aaaa ";
	
	strncpy(arr1,arr,10);
	printf("%s",arr1);
}
