//Q 3. Write a C program to check whether a number is even or odd using switch case. (Lift Off C 2022)

#include<stdio.h>
int main ()
{
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    if (x%2==0)
    {
        printf("the number is even");
    }
    else{
        printf("the number is odd");
    }
    return 0;
}