#include <stdio.h>
 int main( )
 {
    int hesap;
    char isim[ 30 ];
    double bakiye;
/* cfPtr = musteri.dat dosya g�stericisi */
     FILE *cfPtr;
/*fopen ile dosya a��ld� ve dosya ismi verildi*/
   if ( ( cfPtr = fopen( "musteri.dat", "w" ) ) == NULL )
 	printf( "Dosya acilamadi\n" );
   else 
    {
      printf( "Hesap Numarasini, ismi ve bakiyeyi giriniz.\n" );
      printf( "EOF girerek veri girisini sonlandirin.\n" );
      printf( "? " );
         scanf( "%d%s%lf", &hesap,&isim, &bakiye);
        	/* Giri�ten bir karakter okur*/
 	    while ( !feof( stdin ) ) 
	      {
 		fprintf ( cfPtr, "%d %s %.2f\n",hesap, isim, bakiye );
 		 printf( "? " );
 		 scanf( "%d%s%lf", &hesap, &isim, &bakiye);
 	        }
/* Dosya kapatma*/
 	 fclose( cfPtr );
  }
 return 0;
 }
 

