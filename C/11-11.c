#include<stdio.h>

struct students
{
char name;
int midterm[3];
int final;	
int res;	
};



int main()
{
int i,N,discard;

printf("Enter N value:");
scanf("%d",&N);

struct students avg[N];


	for(i=0;i<N;i++)
	{
	printf("Enter the name %d.student:",i+1);
	scanf(" %s",&avg[i].name);
		
	printf("Enter the three midterm grades:\n");
	scanf("%d %d %d",&avg[i].midterm[0],&avg[i].midterm[1],&avg[i].midterm[2]);
	
	printf("Enter the final grade:");
	scanf("%d",&avg[i].final);
	
	int j;
		discard=avg[i].midterm[0];
		for(j=1;j<3;j++)
		{
			if(discard>avg[i].midterm[j])
			{
			discard=avg[i].midterm[j];
			}
		
		}
		if(discard==avg[i].midterm[0])
		{
		avg[i].res=(avg[i].final*40+avg[i].midterm[1]*30+avg[i].midterm[2]*30)/100;
		}
		else if(discard==avg[i].midterm[1])
		{
		avg[i].res=(avg[i].final*40+avg[i].midterm[0]*30+avg[i].midterm[2]*30)/100;	
		}
		else if(discard==avg[i].midterm[2])
		{
		avg[i].res=(avg[i].final*40+avg[i].midterm[0]*30+avg[i].midterm[1]*30)/100;	
		}

		printf("%d\n \n",avg[i].res);
	}
	
	return 0;
}
