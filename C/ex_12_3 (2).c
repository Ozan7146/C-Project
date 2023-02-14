//ex_12_3
#include <stdio.h>

int main(){
    FILE *gradeFile;

    gradeFile = fopen("grade.txt", "w");

    int id, score;
    char c;

    do{
        printf("ID: ");
        scanf("%d", &id);
        printf("Score: ");
        scanf("%d", &score);

        fprintf(gradeFile, "%d %d\n", id, score);

        printf("Do you want to continue( y/n ):");
        scanf(" %c", &c);

    }while(c=='y' || c=='Y');

    fclose(gradeFile);

    return 0;
}
