#include<stdio.h>

int main() {
    short c;
    long n_character = 0;
    long new_line = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n') {
            ++new_line;
        }
        ++n_character;
    }
    printf("\nnumber of character: %ld\n", n_character);
    printf("\nnumber of new line %ld", new_line);
}