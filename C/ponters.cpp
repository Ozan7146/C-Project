#include<stdio.h>

void func(char character,int *result){
if(-1<character && character<10)
{
*result=1;

}
else
{
*result=0;
}

}





int main(){
 int N,i,res;
 char chc;
do{
printf("Enter an positive integer:\n");
scanf("%d",&N);

}while(0>N);


for(i=0;i<N;i++)	
{
printf("Enter a character:\n");
scanf(" %c",&chc);
func(chc,&res);	
	if(res==1)
	{
	printf("it s a digit\n");
	}
	else
	{
	printf("it s not a digit\n");	
	}

}
	
	

	return 0;
}
