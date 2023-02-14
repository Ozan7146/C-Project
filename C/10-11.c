#include<stdio.h>


int main()
{
	
int i,j;	
char name1[15],name2[15];	
	printf("Enter the first name:");
	scanf("%s",name1);
	printf("\n");
	printf("Enter the second name:");
	scanf("%s",name2);
	
	
	for(i=0;i<15;i++)
	{
		for(j=0;j<15;j++)
		{
			if(name1[i]==name2[j])
			{
				printf("%c ",name1[i]);
			}
		
		}
	}
	
	
	
	
	return 0;
}
