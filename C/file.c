//ex_12_2
#include <stdio.h>

int main(){

    int num, first, second, flag;
    FILE *infile;
    FILE *outfile;

    printf("Enter an integer to be inserted: ");
    scanf("%d", &num);

    infile= fopen("old.txt", "r");
    outfile= fopen("new.txt", "w");

    first= 0;
    flag=0;

    while(!feof(infile)){
        fscanf(infile, "%d", &second);

        if(num>first && num<second){
            fprintf(outfile, "%d ", num);
            fprintf(outfile, "%d ", second);
            flag=first;
        }else{
            fprintf(outfile, "%d ", second);
        }
        first = second;
    }
    if(flag==0){
        fprintf(outfile, "%d\n", num);
    }

    fclose(infile);
    fclose(outfile);
    return 0;
}
