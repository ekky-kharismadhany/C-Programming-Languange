#include<stdio.h>

int main() {
    float celcius, fahrenheit;
    float lower, upper, step;
    
    lower = 0;
    upper = 100;
    step = 20;

    printf("C\tF\n");
    while (fahrenheit <= upper)
    {
        celcius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("%.3f\t%.3f\n", celcius, fahrenheit);
        fahrenheit += step;
    }
}