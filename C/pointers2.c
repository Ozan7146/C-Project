#include<stdio.h>
#include<math.h>



void change(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
printf("sayi1=%d sayi2=%d",*a,*b);		
}



int main(){
int sayi1,sayi2,temp;
printf("Enter 2 integer that you want to change:\n");
scanf("%d %d",&sayi1,&sayi2);	
printf("sayi1=%d sayi2=%d\n",sayi1,sayi2),
change(&sayi1,&sayi2);	
	
return 0;	
}
