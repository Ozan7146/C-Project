#include<stdio.h>

struct compute{
	int num1;
	int num2;
	char op;
	int result;
};

int main(){
	
	struct compute nums;
	printf("Enter number 1:");
	scanf("%d",&nums.num1);
	
	printf("Enter number 2:");
	scanf("%d",&nums.num2);
	printf("Enter the operation: ");
    scanf(" %c", &nums.op);
	
	if(nums.op=='+'){
	}
	
	
	return 0;
}
