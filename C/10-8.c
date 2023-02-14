#include<stdio.h>
#include<string.h>


int main(){
	char str[100]= {'\0'};
	char arr[3][10]= {'\0'};
	int a,i=0,j=0,k;
	
	printf("Enter string:");
	gets(str);
	a=strlen(str);

		
			for(k=0;k<a;k++)
			{
				if(str[k]==' ')
				{
					i++;
					j=0;
					k++;
				}			
				arr[i][j]=str[k];
				j++;	
			}
		
		for(i=0;i<3;i++)
		{
			for(j=0;j<10;j++)
			{
				printf("%c ",arr[i][j]);
					
			}
			printf("\n");
		}
		
	
	
	
	return 0;
}
