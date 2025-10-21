#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    FILE *file;
    char ch;
    long char_count = 0;
    int word_count = 0;
    int line_count = 0;
    int in_word = 0; // Flag to check if we are inside a word

    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    file = fopen(argv[1], "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Initialize line count to 1 if the file is not empty
    if ((ch = fgetc(file)) != EOF) {
        line_count = 1;
        rewind(file); // Go back to the start of the file
    } else {
        line_count = 0; // File is empty
    }


    while ((ch = fgetc(file)) != EOF) {
        char_count++;

        if (ch == '\n') {
            line_count++;
        }

        if (isspace(ch)) {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            word_count++;
        }
    }

    if (char_count == 0) {
      line_count = 0; // Handle case for an entirely empty file
    }


    printf("--- File Statistics for: %s ---\n", argv[1]);
    printf("Total Characters: %ld\n", char_count);
    printf("Total Words: %d\n", word_count);
    printf("Total Lines: %d\n", line_count);

    fclose(file);
    return 0;
}
