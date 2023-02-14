#include<stdio.h>
#include<string.h>

int main(){
	
	int i,length;
	char str[100];
	
	printf("Enter a string:");
	gets(str);
	length=strlen(str);
	
	for(i=0;i<length;i++)
	{
		if(str[i]==' ')
		{
			str[i]='*';
		}
	}
	
	for(i=0;i<length;i++)
	{
		printf("%c",str[i]);
	}
	
	
	
	return 0;
}
