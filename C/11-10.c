#include<stdio.h>

struct compute{
int num1[4];
int num2[4];
char op[4];	
int res[4];	
};



int main()
{
	struct compute numbers;
	int i;	
	for(i=0;i<4;i++)
	{
		printf("Enter numbers:\n");
		scanf("%d %d",&numbers.num1[i],&numbers.num2[i]);
		printf("Enter operand:");
		scanf(" %c",&numbers.op[i]);
	}
	for(i=0;i<4;i++)
	{
	
	if(numbers.op[i]=='+')
	numbers.res[i]=numbers.num1[i]+numbers.num2[i];
	
	else if(numbers.op[i]=='-')
	numbers.res[i]=numbers.num1[i]-numbers.num2[i];
	
		
	else if(numbers.op[i]=='/')
	numbers.res[i]=numbers.num1[i]/numbers.num2[i];
	
		
	else if(numbers.op[i]=='*')
	numbers.res[i]=numbers.num1[i]*numbers.num2[i];
	}


	for(i=0;i<4;i++)
	{
		
	printf("%d \n",numbers.res[i]);
	}
		
	
	
	return 0;
}
