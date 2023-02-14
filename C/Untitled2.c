#include <stdio.h>


float sum(float *a,float *b){
return *a+*b;
}


int main()
{
float num1,num2;
printf("Enter two number");
scanf("%f %f",&num1,&num2);	
printf("%f",sum(&num1,&num2));		

return 0;
}
