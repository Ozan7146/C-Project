#include<stdio.h>
#include<math.h>



int main(){
int a,b,j,i;	
char name[a][b];

printf("Enter line and column number:\n");
scanf("%d %d",&a,&b);

for(i=0;i<a;i++)
{							
	for( j=0;j<b;j++)
	{	
	printf("Enter character:\n",a);
	scanf(" %c",&name[i][j]);
	}
}

for(i=0;i<a;i++)
printf("%s",&name[i]);


	
return 0;
}

/*kullan�c�n�n sut�n ve sat�r say�s�n� belirleyip sonra string olarak sat�r say�s� kadar isim almas�n� istiyorum (1.s�tuna ismi yazd�racak)
ve en son string olarak bunu yazd�rmak istiyorum*/
  
