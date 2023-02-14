#include<stdio.h>

int main()
{
int dizi[10];

for(int i=0;i<10;i++){
printf("Enter %d. numbers:\n",i+1);
scanf("%d",&dizi[i]);
}


for(int i=0;i<10;i++){
	if(	dizi[i]<dizi[i+1]) 
	{
printf("Numbers in ascending order:");

	}	
	else 
	{
		printf("Not in ascending order");
	break;
	}



//for(int i=0;i<10;i++)
//	if()










	
}
return 0;
}
