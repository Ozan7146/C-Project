#include<stdio.h>


int main(){
	
	int i,arr[30],N,del,index;
	
	printf("Enter N number:\n");
	scanf("%d",&N);
	
	for(i=0;i<N;i++)
	{
		printf("Enter %d.number:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter the number that you want to deleted:");
	scanf("%d",&del);
		
	for(i=0;i<N;i++)
	{
		if(arr[i]==del)
		{
			index=i;
		}
		
	}
	
	for(i=0;i<N-1;i++){
	
	arr[index+i]=arr[index+1+i];
				
					}
				
					
	for(i=0;i<N-1;i++)
	{
		printf("%d\n",arr[i]);
	}

	return 0;
}
