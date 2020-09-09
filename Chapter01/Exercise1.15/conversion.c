#include <stdio.h>

void convert(float lower, float upper, float step, float fahr, float celsius);
int main()
{
    printf("---Celsius To Fahrenheit---\n");
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    convert(lower, upper, step, fahr, celsius);
}

void convert(float lower, float upper, float step, float fahr, float celsius)
{
    fahr = lower;

    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("\t%.2f\t\t %.2f\n", celsius, fahr);
        fahr = fahr + step;
    }
}

//Exercise 1.15 from page 27