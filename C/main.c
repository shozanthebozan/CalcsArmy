#include <stdio.h>
#include <stdlib.h>
void sum(int *resultptr, int a,int b)
{
    *resultptr=a+b;
}
void subtract(int *resultptr, int a,int b)
{
    *resultptr=a-b;
}
void multiply(int *resultptr, int a,int b)
{
    *resultptr=a*b;
}
void divide(int *resultptr, int a,int b)
{
    *resultptr=a/b;
}
void modulo(int *resultptr, int a,int b)
{
    *resultptr=a%b;
}

int main()
{
    int Operation, num1, num2, result;
    while(1)
    {
        puts("Enter 1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division or 5 for Modulo");
        if (scanf("%d", &Operation) !=1)
        {
            puts("\nInvalid Operation\n");
            getchar();
            continue;
        }
        puts("Enter 1st number:");
        scanf("%d", &num1);
        puts("Enter 2nd number:");
        scanf("%d", &num2);
        switch(Operation)
        {
            case 1:
                sum(&result, num1, num2);
                printf("%d + %d = %d\n", num1, num2, result);
                break;
            case 2:
                subtract(&result, num1, num2);
                printf("%d - %d = %d\n", num1, num2, result);
                break;        
            case 3:
                multiply(&result, num1, num2);
                printf("%d * %d = %d\n", num1, num2, result);
                break;
            
            case 4:
                divide(&result, num1, num2);
                printf("%d / %d = %d\n", num1, num2, result);
                break;
                
            case 5:
                modulo(&result, num1, num2);
                printf("%d %% %d = %d\n", num1, num2, result);
                break;
                
            default:
                puts("\nInvalid operation\n");
        }
        
        
    }
    return 0;
}