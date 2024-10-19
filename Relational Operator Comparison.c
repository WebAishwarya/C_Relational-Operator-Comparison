/*
    2.Relational Operator Comparison
    Problem :   Write a program that takes two numbers as input and compares them using all relational operators 
                (==,!=,>,<,>=,<=). 
                Print the results of each comparison.
*/

#include<stdio.h>

int main()
{
    printf("PROGRAM FOR PERFORMING RELATIONAL OPETATORS\n");
    
    printf("\nPerforming == and != Operators :");
    int a, b;
    printf("\nEnter the first number a : ");
    scanf("%d", &a);
    printf("Enter the second number b : ");
    scanf("%d", &b);
    
    if(a==b)
    {
        printf("The value of a %d is equal to the value of b %d", a, b);
    }
    
    if(a!=b)
    {
        printf("The value of a %d is not equal to the value of b %d", a, b);
    }
    
    printf("\n\nPerforming < and > Operators :");
    int less, great;
    printf("\nEnter the first number : ");
    scanf("%d", &less);
    printf("Enter the second number : ");
    scanf("%d", &great);

    if(less < great)
    {
        printf("The value %d is less than the other number %d", less, great);
    }
    else
    {
        printf("The value %d is greater than the other number %d", less, great);
    }
    
    printf("\n\nPerforming >= and <= Operators :");
    int l, g;
    printf("\nEnter the first number : ");
    scanf("%d", &l);
    printf("Enter the second number : ");
    scanf("%d", &g);

    if(g >= l)
    {
        printf("The value %d is greater than or equal to the other number %d", g, l);
    }
    else
    {
        printf("The value %d is less than or equal to the other number %d", g, l);
    }
    
    return 0;
}
