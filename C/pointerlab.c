#include<stdio.h>
#include<math.h>


void f_timer(int time,int *hours,int *minutes,int *seconds);

int main()
{
	int time,hours,minutes,seconds;
printf("Enter flight times in seconds:");
scanf(" %d",&time);
f_timer(time,&hours,&minutes,&seconds);
printf("%d hours %d minutes %d seconds",*hours,*minutes,*seconds);
return 0;
}





void f_timer(int time,int *hours,int *minutes,int *seconds){
	*hours=time/3600;
	*minutes=(time%3600)/60;
	*seconds=(time%3600)%60;
	
	
	
	
}
