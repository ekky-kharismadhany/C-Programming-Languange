#include<stdio.h>

int main() {
    float fahrenheit, celcius;
    printf("C\tF\n");
    for ( fahrenheit = 0; fahrenheit < 300; fahrenheit+=50)
    {
        celcius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("%.3f\t%.3f\n", celcius, fahrenheit);
    }
    printf("=====================================\n");
    for (fahrenheit = 300; fahrenheit >0; fahrenheit -= 50)
    {
        celcius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("%.3f\t%.3f\n", celcius, fahrenheit);
    }
}