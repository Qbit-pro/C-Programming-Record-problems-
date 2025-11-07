#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp1, *fp2;
    char c;

    // Create source file
    fp1 = fopen("source.txt", "w");
    if (fp1 == NULL) {
        perror("Error opening source.txt for writing");
        return 1;
    }

    printf("\nCREATION OF SOURCE FILE [press ENTER & ctrl+z to save after the text is entered]\n"); 
    printf("\n-----------------------------------------------\n\n");

    while ((c = getchar()) != EOF) {
        fputc(c, fp1);
    }
    fclose(fp1);

    // Copy contents from source to destination
    fp1 = fopen("source.txt", "r");
    if (fp1 == NULL) {
        perror("Error opening source.txt for reading");
        return 1;
    }

    fp2 = fopen("dest.txt", "w");
    if (fp2 == NULL) {
        perror("Error opening dest.txt for writing");
        fclose(fp1);
        return 1;
    }

    while ((c = fgetc(fp1)) != EOF) {
        fputc(c, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    // Display contents of destination file
    fp2 = fopen("dest.txt", "r");
    if (fp2 == NULL) {
        perror("Error opening dest.txt for reading");
        return 1;
    }

    printf("\nDISPLAYING THE CONTENTS OF DESTINATION FILE:\n\n");
    printf("\n-----------------------------------------------\n\n");

    while ((c = fgetc(fp2)) != EOF) {
        putchar(c);
    }

    fclose(fp2);
    return 0;
}