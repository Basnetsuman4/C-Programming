// Operation of if else codition statement
#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    printf("\tEnter the value of a : ");
    scanf("%d",  &a);
    if(a>=0)
    {
        printf("\n\tIt is a posotive integer");

    }

    else
    {
        printf("\n\tIt is a negative integer.");
    }
    getch();
return 0;
}