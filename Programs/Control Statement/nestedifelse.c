//Use of nested if else statement  to find wethear a year is leap year or not
#include<stdio.h>
#include<conio.h>

int main()
{
    int year;
    printf("\tEnter the year : ");
    scanf("%d", &year);

    if ( year % 4 == 0)
    {
        if ( year % 100 ==0)
        {

            if (year % 400 == 0)
            {
                printf("\n\tThe year you have entered is a Leap Year.");
            }
            
            else
            {
                printf("\n\tThe year you have entered is not a Leap Year.");
            }
            
        }

        else
            {
                printf("\n\tThe year you have entered is  a Leap Year.");
            }
        
    }

    else
            {
                printf("\n\tThe year you have entered is not a Leap Year.");
            }
    
return 0;
}