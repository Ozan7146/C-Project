#include <stdio.h>
#include <stdlib.h>


int main() {
/*	int i,j;
int cokboyutludizi[3][2]={1,2,3,4,5,6};
			for( i=0;i<3;i++)
			{
				for( j=0;j<2;j++)
				     {					
					printf("%d ",cokboyutludizi[i][j]);					 					
					 }
				printf("\n");
				
			}

	*/		
int satirsayisi,sutunsayisi;
int cokboyutludizi[satirsayisi][sutunsayisi]; 
int i,j;
printf("Satir sayisi ve sutun sayisi gir:\n",satirsayisi,sutunsayisi);
scanf("%d %d",&satirsayisi,&sutunsayisi);

for(i=0;i<satirsayisi;i++)
{
for(j=0;j<sutunsayisi;j++){
      printf("%d satirindaki %d sutundaki degeri giriniz",i,j);
      scanf("%d",&cokboyutludizi[i][j]);
	  }
printf("\n");

}


for(i=0;i<satirsayisi;i++)
{
for(j=0;j<sutunsayisi;j++){
      
      printf("%d",&cokboyutludizi[i][j]);
	  }
printf("\n");

}

	return 0;
}
