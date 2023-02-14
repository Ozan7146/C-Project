#include<stdio.h>
#include<string.h>
struct company{
	char name[25];
	int sales;
	
};



int main(){
	
	struct company human[5];
	
	for(int i=0;i<5;i++)
	{
		printf("Enter the name of %d.human:\n",i+1);
		fgets(human[i].name,25,stdin);	
		human[i].name[strcspn(human[i].name,"\n")]='\0';
			
		printf("Enter %s sales number:",human[i].name);
		scanf(" %d",&human[i].sales);
		getchar(); //neden kullandýk bunu olmaýnca hata veriyor
	}
	
	
	
	float avg,total;
	for(int i=0;i<5;i++){
	total=total+human[i].sales;
		
	
	}
	
	avg=total/5;
	printf("%.1f",avg);
	
	
	
	
	
	return 0;
}
