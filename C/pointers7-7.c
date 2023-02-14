#include<stdio.h>

int sum(int a){

int sum;
sum=a*a;
int *ptr;
*ptr=sum;
return *ptr;
}





int main(){
int N,res;
printf("Enter an integer:");
scanf(" %d",&N);
res=sum(N);
	printf("%d",res);
	return 0;
}
