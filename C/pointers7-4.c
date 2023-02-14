#include<stdio.h>

void func(int a,int *result)
{
	
	int i,b;
	b=1;
for(i=0;i<a;i++){
	
		b= b* (a-i);
	
}	
	*result=b;
	
}


int main(){
	int n,res;
	printf("Enter an integer:");
	scanf("%d",&n);
	func(n,&res);
	printf("%d",res);
	
	return 0;
}
