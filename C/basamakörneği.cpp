#include<stdio.h>

int two_digits(int count);

int main(){
	

int digit[10];

for(int i=0;i<10;i++){
printf("Enter 10 integer:\n");
scanf("%d",&digit[i]);
}	
printf("There are %d elemets with 2 digits",two_digits(digit));
return 0;
}




int two_digits(int count){
	int total=0,a;
	if(count/10!=0){
		a=count/10;
		
		if(a/10==0)
		total=total+1;
		return count;
	}
	
}
