#include<stdio.h>
#include<math.h>

int main(){

int matriks[4][4];
int i,j;	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++)
		{printf("Enter %d,satir %d.sutun:\n",i+1,j+1);
		scanf("%d",&matriks[i][j]);
		}
	}
	
return 0;
}

