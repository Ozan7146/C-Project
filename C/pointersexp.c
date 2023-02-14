#include<stdio.h>
#include<math.h>





float topla(float *a,float *b){
return *a+*b;
} 

float cikar(float *x,float *y){
return *x-*y;	
}



int main(){
float sayi1,sayi2;
char sign;
printf("Enter 2 value:\n");
scanf("%f %f",&sayi1,&sayi2);
printf("If you want plus press p if you want minus press m\n");
scanf(" %c",&sign);

if(sign=='p')
{
printf("%f",topla(&sayi1,&sayi2));	
}
else if(sign=='m')	
{
printf("%f",cikar(&sayi1,&sayi2));
}
else
{
printf("Wrong sign try again");

}

return 0;
	
}
