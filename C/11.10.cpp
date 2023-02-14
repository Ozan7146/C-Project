#include<stdio.h>



struct compute{
int num1;	
int num2;	
char op;
int result;
};

int main(){

	struct compute nums[10];
	for(int i=0;i<10;i++){
		printf("Enter the numbers:");
		scanf("%d %d",&nums[i].num1,&nums[i].num2);
	
	printf(	"Enter the operand");
	scanf(" %c",&nums[i].op);
	
	
	if(nums[i].op=='+')
	{
	nums[i].result=nums[i].num1+nums[i].num2;
	}
	
	
	
	
	
	}
	
	
	return 0;
}
