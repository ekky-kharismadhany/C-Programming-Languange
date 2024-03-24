#include<stdio.h>

int main() {
    float fahrenheit, celcius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahrenheit = lower;
    printf("F\tC\n");
    while (fahrenheit <= upper)
    {
        celcius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("%1.1f\t%1.1f\n", fahrenheit, celcius);
        fahrenheit += step;
    }
    return 0;
}