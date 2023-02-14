#include<stdio.h>


int main(){
	int N,num,reminder;
	int arr_old[30],arr_new[30];
	printf("Enter array size:");
	scanf("%d",&N);
	
	z
	for(int i=0;i<N;i++){
		
	printf("Enter %d. array number:",i+1);
	scanf("%d",&arr_old[i]);
	
	}
	
	printf("Enter the number you want to delete from array:");
	scanf("%d",&num);
	
	
	for(int i=0;i<N;i++){
		if(num==arr_old[i])
		{
			reminder=i;
		//	printf("%d\n",reminder);
			break;
		}
		
	}
	
	for(int i=0;i<N;i++){
		arr_new[i]=arr_old[i]-arr_old[reminder]; //arr_old={3,5,7,9};       7 yi çıkar;   arr_new={3,5,9};  reminder=2;
						}
	
		for(int i=0;i<N;i++){
			
			printf("%d\n",arr_new[i]);
		}
	
	
	return 0;
}
