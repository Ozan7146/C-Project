#include<stdio.h>

void flight_time(int time,int *hour,int *min,int *sec);


int main(){
	int time,hours,minutes,seconds;
	printf("Enter flight time in seconds:");
	scanf("%d",&time);
	flight_time(time,&hours,&minutes,&seconds);
		
	printf("%d hours %d minutes %d seconds",hours,minutes,seconds);
	
	
	
	
	
	return 0;
}



void flight_time(int time,int *hour,int *min,int *sec){
	
	*hour=time/3600;
	*min=(time%3600)/60;
	*sec=((time%3600)%60);
	
	
}

