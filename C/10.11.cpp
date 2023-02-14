#include<stdio.h>
#include<string.h>
#define LENGTH 15

int main(){
	
	char name1[5],name2[5];
	char temp;
	
 printf("Enter a name: ");
    fgets(name1, LENGTH, stdin);

    printf("Enter a name: ");
    fgets(name2, LENGTH, stdin);
	

	for(int i=0;i<4;i++){
		if(name1[i]==name2[i])
			{
			printf("%c",name1[i]);
			}

	}
	
	return 0;
}
