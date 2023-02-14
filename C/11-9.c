#include<stdio.h>


struct calc{
	
 int num1;	
 int num2;
 char op;	
 
}; 




int main()
{
	struct calc func;
	printf("Enter the num1 and num2:\n");
	scanf("%d %d",&func.num1,&func.num2);
	
	printf("Enter an operand:");
	scanf(" %c",&func.op);
	
int a;
 if(func.op=='+')
 a=func.num1+func.num2;
 else if(func.op=='-')
 a=func.num1-func.num2;
 else if(func.op=='/')
 a=func.num1/func.num2;
 else if(func.op=='*')
 a=func.num1*func.num2;
 else
 printf("wrong operand");
 
 printf("%d",a);
	
	return 0;
}
