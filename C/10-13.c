#include<stdio.h>
#include<string.h>




int main(){
	int length,i,j,a,place,two_word_count=0,three_word_count=0,four_word_count=0;
	char str[100];
	printf("Enter a string:");
	gets(str);
	//length=strlen(str);
	

	while(length=='\0')
	{
	
	a=strcspn(str," ");
		
		for(j=0;j<a;j++)
		{
		place=strlen(str);
			str[j]='*';
		j=a	;	
		
		
		
		if(place==2)
		{
		two_word_count++;
		}
		if(place=3)
		{
		three_word_count++;
		}
		if(place==4)
		{
		four_word_count++;
		}
	
	}	
}

printf("%d two letter \n %d three letter \n %d four letter",two_word_count,three_word_count,four_word_count);






	return 0;
}
