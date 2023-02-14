#include<stdio.h>

int main(){

FILE *grade;

grade=fopen("marti.txt","w");


fprintf(grade,"HELLO WORLD");
fclose(grade);
return 0;
}
