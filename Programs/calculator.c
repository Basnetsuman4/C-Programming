#include<stdio.h>
#include<conio.h>

int main()
{
    int opt;
    float a,b,ope;
     

        printf("\t\t##CALCULATOR##");
        printf("\n\t1=>   Enter 1 for addition operation");
        printf("\n\t2=>   Enter 2 for substraction operation");
        printf("\n\t3=>   Enter 3 for multiplication operation");
        printf("\n\t4=>   Enter 4 for division operation");
        scanf("%d", &opt);

         switch(opt)
    {
        case 1 :
        {
            printf("\n\tEnter the two numbers : ");
            scanf("%f%f", &a,&b);

            ope = a+b;
            printf("\n\tThe sum of the entered number is %f",ope);
        }

        break;


        case 2 :
        {
            printf("\n\tEnter the two numbers : ");
            scanf("%f%f", &a,&b);

            ope = a-b;
            printf("\n\tThe difference of the entered number is %f",ope);
        }
        break;


        case 3 :
        {
            printf("\n\tEnter the two numbers : ");
            scanf("%f%f", &a,&b);

            ope = a*b;
            printf("\n\tThe product of the entered number is %f",ope);
        }
        break;


        case 4 :
        {
            printf("\n\tEnter the two numbers : ");
            scanf("%f%f", &a,&b);

            ope = a/b;
            printf("\n\tThe division output of the entered number is %f",ope);
        }
        break;



        default:
            
                printf("\n\tYou have entered unavailable choice.");
                               
    }
            
   return 0;
}