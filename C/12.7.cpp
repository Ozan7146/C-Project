#include <stdio.h>

int main(){

    FILE *input , *output;
    input=fopen("inp.txt","w");
    output=fopen("out.txt","w");
    int arr[20][50],sum=0,avg,maks,min;
    
    int j,i;
    for(int i=0;i<2;i++)
    {
    	for(int i=0;i<5;i++)
	{
		printf("Enter values:\n");
		scanf("%d ",&arr[i][j]);	
	
	}
printf("\n");
	}
	fprintf(input,"%d",arr);    
	

maks=arr[0][0];
min=arr[0][0];
 for(int i=0;i<2;i++)
    {
    	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i][j];
		
		if(maks<arr[i][j])
		{
			maks=arr[i][j];
		}		
		
			if(min>arr[i][j])
		{
			min=arr[i][j];
		}		
		
	}

	}
avg=sum/10;

fprintf(output,"%d %d %d",avg,maks,min);








    return 0;
}
