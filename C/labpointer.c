#include<stdio.h>
#include<math.h>


void f_timer(int a)
{
int minute,hours,sec;
hours=a/3600;
minute=(a%3600)/60;
sec=(a%3600)%60;
printf("It's %d hours %d minutes and %d seconds",hours,minute,sec);




}




int main()
{
int second;

printf("Enter flight times in seconds:");
scanf(" %d",&second);
f_timer( second);

return 0;
}
