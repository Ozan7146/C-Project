#include<stdio.h>


void digit(int number,int *leftdigit,int *rightdigit){
int i,a=0;

while(a!=0){
	a=a/10;
	a++;
	}
	*rightdigit=number%10;
	for(i=1;i<a;i++)
	{
	*leftdigit=number/10;
	}
}

int main(){
	int N,left,right;
	do{
		printf("Enter number:");
		scanf("%d",&N);
		digit(N,&left,&right);
		printf("left digit number = %d right digit number = %d\n",left,right);	
	}while(0<N);

	return 0;
}
