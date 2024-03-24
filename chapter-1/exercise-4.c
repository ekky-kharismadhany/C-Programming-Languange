#include<stdio.h>

int main() {
    float celcius, fahrenheit;
    float lower, upper, step;
    
    lower = 0;
    upper = 100;
    step = 20;

    printf("C\tF\n");
    while (celcius <= upper)
    {
        fahrenheit = (celcius * 9.0 / 5.0) + 32.0;
        printf("%.3f\t%.3f\n", celcius, fahrenheit);
        celcius += step;
    }
}