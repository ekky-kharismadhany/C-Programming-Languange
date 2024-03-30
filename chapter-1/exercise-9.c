#include<stdio.h>

int main() {
    int characters = 0;
    int lastCharacters = 0;
    while ((characters = getchar()) != EOF)
    {
        if ((lastCharacters != ' ') || (characters != ' '))
        {
            putchar(' ');
            putchar(characters);
        }
        lastCharacters = characters;
    }   
}