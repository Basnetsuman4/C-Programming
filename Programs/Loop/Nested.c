#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j;
    int r,c;
    printf("Enter the number of row : ");
    scanf("%d",&r);
    printf("Enter the number of column : ");
    scanf("%d",&c);

    for (int i = 0; i < r ; i++)
    {
         for (int j = 0; j < c; j++)
         {
            printf("\t*");
         }

         printf("\n");
         
    }
    
return 0;
}