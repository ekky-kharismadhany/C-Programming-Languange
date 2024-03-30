#include<stdio.h>

int main() {
    printf("verify getchar() %d \n", getchar() != EOF);

    int c = getchar();

    printf("value of EOF? %d \n", EOF);
}