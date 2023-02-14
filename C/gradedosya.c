#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int number,grade;
	FILE *dosya;
	dosya=fopen("grade.txt","w");
	printf("Enter students number and grade:\n");
	scanf("%d %d",&number,&grade);
	fprintf(dosya,"%d  %d",number,grade);	
	fclose(dosya);	
	return 0;
}
