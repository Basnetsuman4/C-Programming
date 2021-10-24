//Oeration of function gets and puts
#include<stdio.h>
#include<conio.h>

int main()
{
    char name[20], address[30];
    printf("\tEnter your name : ");
    gets(name);
    printf("\n\tEnter your address : " );
    gets(address);
 


    printf("\n\tYour name is : ");
    puts(name);

    printf("\n\tYour address is : ");
    
    puts(address);
    return 0;
}