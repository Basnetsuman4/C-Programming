//conditional operator ?&:
#include<stdio.h>
#include<conio.h>

int main()
{
    int c;
    printf("enter the value of c : ");
    scanf("%d",&c);
    c = (c>5) ? 10 :20;  // if the value of c is greater than 5 the set then return 10  if not then return 20//
    printf("so the value is %d ", c);
    getch();
    return 0;
}