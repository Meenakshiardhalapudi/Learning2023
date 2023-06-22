#include <stdio.h>
#include <ctype.h>

void copyFile(FILE *source, FILE *destination, int option) {
    char c;

    while ((c = fgetc(source)) != EOF) {
        switch (option) {
            case 1: // Lower Case
                fputc(tolower(c), destination);
                break;
            case 2: // Sentence Case
                if (isalpha(c)) {
                    fputc(toupper(c), destination);
                    while ((c = fgetc(source)) != EOF && c != '.' && c != '!' && c != '?')
                        fputc(tolower(c), destination);
                } else {
                     fputc(c, destination);
                }
                break;
            case 3: // Upper Case
                fputc(toupper(c), destination);
                break;
            default: // Normal Copy
                fputc(c, destination);
                break;
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s <source file> <destination file> [option]\n", argv[0]);
        return 1;
         }

    FILE *source = fopen(argv[1], "r");
    if (source == NULL) {
        printf("Unable to open source file.\n");
        return 1;
    }

    FILE *destination = fopen(argv[2], "w");
    if (destination == NULL) {
        printf("Unable to create destination file.\n");
        fclose(source);
        return 1;
    }

    int option = 0;
    if (argc > 3) {
        if (argv[3][0] == '-')
            option = tolower(argv[3][1]);
    }

    copyFile(source, destination, option);

    fclose(source);
    fclose(destination);

    printf("File copied successfully.\n");

    return 0;
}