#include <stdio.h>

int main()
{
    printf("---Fahrenheit To Clesius---\n");
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("\t%.2f\t\t %.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
}