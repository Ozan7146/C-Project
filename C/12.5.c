#include <stdio.h>

int main(){

    FILE *gradeFile, *letterFile, *resultFile;

    resultFile = fopen("result.txt", "w");
    gradeFile = fopen("grade.txt", "r");
    letterFile = fopen("letter.txt", "r");

    int id1, id2, grade;
    char letter;

    while(fscanf(gradeFile, "%d %d", &id1, &grade) != EOF){
        fscanf(letterFile, "%d %c", &id2, &letter);

        if(id1 == id2){
           fprintf(resultFile, "%4d %3d %c\n", id1, grade, letter);
        }
    }

    fclose(resultFile);
    fclose(gradeFile);
    fclose(letterFile);

    return 0;
}
