#include<stdio.h>
#include<conio.h>

int main()
{
    int opt;
    float a,b,ope;
    char ch,Y;
    printf("\t\t##CLACULATOR##");
    printf("\n\t1=>   Enter 1 for addition operation");
    printf("\n\t2=>   Enter 2 for substraction operation");
    printf("\n\t3=>   Enter 3 for multiplication operation");
    printf("\n\t4=>   Enter 4 for division operation");
    scanf("%d", &opt);

    do
    {
         switch(opt)
    {
        case 1 :
        
            printf("\n\tEnter the two numbers : ");
            scanf("%f%f", &a,&b);

            ope = a+b;
            printf("\n\tThe sum of the entered number is %f",ope);
        

        break;


        case 2 :
        
            printf("\n\tEnter the two numbers : ");
            scanf("%f%f", &a,&b);

            ope = a-b;
            printf("\n\tThe difference of the entered number is %f",ope);
        
        break;


        case 3 :
        
            printf("\n\tEnter the two numbers : ");
            scanf("%f%f", &a,&b);

            ope = a*b;
            printf("\n\tThe product of the entered number is %f",ope);
        
        break;


        case 4 :
        
            printf("\n\tEnter the two numbers : ");
            scanf("%f%f", &a,&b);

            ope = a/b;
            printf("\n\tThe division output of the entered number is %f",ope);
        
        break;



        default:
            
                printf("\n\tYou have entered unavailable choice.");
                printf("\n\tTo use calculator again, press Y and to end the operation press N.");
                scanf("%c", &ch);

                
            
            
    }

    } while (ch == Y);
    
   return 0;
}