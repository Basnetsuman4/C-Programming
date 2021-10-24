#include<stdio.h>
#include<conio.h>

int main()
{
    float clecius, fahern;
    printf("\n\tEnter the temerature in Celcius : ");
    scanf("%f",&clecius);

    fahern =( (9 * clecius)/5 )+32;
    printf("\n\tThe temperature in Fahernheit is %f ", fahern);
    return 0;
}