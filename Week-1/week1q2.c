//Q 2. Write a program to find maximum between two numbers. (Lift Off C 2022)

#include<stdio.h>
int main(){
    int x, y;
    printf("Enter Any Two Numbers:\n");
    scanf("%d%d",&x,&y);
    if (x>y)
    {
        printf("%d Is Maximum number",x);
    }
    else
    {
        printf("%d Is Maximum number",y);
    }
    return 0;
}