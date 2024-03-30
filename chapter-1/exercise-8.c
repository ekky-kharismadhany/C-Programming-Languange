#include<stdio.h>

int main() {
    int blanks, tabs, newlines = 0;
    int characters;
    while ((characters = getchar()) != EOF)
    {
        if (characters == ' ') 
        {
            ++blanks;
        } else if (characters == '\n') {
            ++newlines;
        } else if (characters == '\t') {
            ++tabs;
        }
    }
    printf("\nWe have %d blanks, %d tabs, and %d newlines \n", blanks, tabs, newlines);
    return 0;
}