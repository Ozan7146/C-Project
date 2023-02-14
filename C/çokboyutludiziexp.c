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

/*kullanýcýnýn sutün ve satýr sayýsýný belirleyip sonra string olarak satýr sayýsý kadar isim almasýný istiyorum (1.sütuna ismi yazdýracak)
ve en son string olarak bunu yazdýrmak istiyorum*/
  
