#include<stdio.h>


struct compute{
	int num1[10];
	int num2[10];
	char op[10];
	int result[10];
	
	
};




int main(){
	
	struct compute value;
	
	for(int i=0;i<4;i++){
	printf("Enter the numbers:\n");
	scanf("%d %d",&value.num1[i],&value.num2[i]);
	printf("Enter the operand:\n");
	scanf(" %c",&value.op[i]);
					
	
	if(value.op[i]=='+'){
		value.result[i]=value.num1[i]+value.num2[i];
		
	}
 
	else if(value.op[i]=='/'){
		value.result[i]=value.num1[i]/value.num2[i];
		
	}
		else if(value.op[i]=='-'){
		value.result[i]=value.num1[i]-value.num2[i];
		
	}
		 else if(value.op[i]=='*'){
		value.result[i]=value.num1[i]*value.num2[i];
		
	}
	else
	printf("Wrong Char");
	
		}	
		
		
		
		
		for(int i=0;i<4;i++){
			printf("%d\n",value.result[i]);
			
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
	return 0;
}
