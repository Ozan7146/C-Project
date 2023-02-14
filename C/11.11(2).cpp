#include<stdio.h>




struct grade{
	
	char name;
	int	midterms[3];
	int final;
	int min; //discard etmek için
	int avg;
};



int main(){
	int count;
struct grade student[100];	
	printf("Enter students number in class:\n");
	scanf(" %d",&count);
	for(int i=0;i<count;i++){
		
		printf("Enter students name:\n");
		scanf(" %s",&student[i].name);
		
		printf("Enter three midterms grade:\n");
		scanf(" %d %d %d",&student[i].midterms[1],&student[i].midterms[2],&student[i].midterms[3]);
		
		
		printf("Enter final grade:");
		scanf(" %d",student[i].final);
		
		printf("deneme");
	}
	
		for(int i=0;i<count;i++){  //discard etmek içim
			
			int min,Temp;
			
			student[i].min=student[i].midterms[1];
			
			for(int j=0;j<3;j++){
		
			
			
			if(student[i].min>student[i].midterms[j]){
				student[i].min=student[i].midterms[j];
		temp=j;
		printf("deneme");
		
			}
			
			}
		}
		
		switch(temp);
		
		 case 1
		       student[i].avg=(student[i].min*0+student[i].midterms[2]*30+student[i].midterms[3]*30+student[i].final*40)/100;
		printf("%d",student[i].avg);
		       break;
		 case 2
		 student[i].avg=(student[i].min*0+student[i].midterms[1]*30+student[i].midterms[3]*30+student[i].final*40)/100;
		printf("%d",student[i].avg);
		 
		       break;
		 case 3
		   student[i].avg=(student[i].min*0+student[i].midterms[1]*30+student[i].midterms[2]*30+student[i].final*40)/100;
		printf("%d",student[i].avg);
		 
		       break;
	
	for(int i=0;i<count;i++){
		
		printf("Students name:\n",student[i].name);
		printf("Students midterm grades\n:",student[i].midterms[1],student[i].midterms[2],student[i].midterms[3]);
		printf("Students Final grade is:\n",student[i].final);
for()
		student[i].avg=(student[i].min*0+student[i].midterms[1]*30+student[i].midterms[2]*30+student[i].final*40)/100;
		printf("%d",student[i].avg);
		
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
