#include<stdio.h>


int per(int vote,int sum){
	
	int percantage;
	percantage=vote*100/sum;
return	percantage;
}

int main(){
	
  int vote[5],sum=0;
  for(int i=0;i<5;i++){
  
  printf("Enter %d. parties vote:\n",i+1);
  scanf("%d",&vote[i]);
		sum=sum+vote[i];
		}
	for(int i=0;i<5;i++){
	printf("%d.parties vote are %d  %d percantage \n ",i+1,vote[i],per(vote[i],sum));
	}
		
	 	 
	int a=0;
	
	for(int i=0;i<5;i++){
	int	winner=vote[0];
	if(winner<vote[i])
	{
	winner=vote[i];
	a=i;}
	
}
	 printf("Winner is %d.party",a+1);	
					  
	return 0;
}
