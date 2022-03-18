/*Q2. You have a number N. You have to do a LOC operation on N to find the LOC counterpart of N.
A LOC operation is swapping two extreme digits of a number. For example, If N=105 then applying LOC operation, N will be 501.
So, find the LOC counterpart of number N.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num, swappedNum;
    int firstDigit, lastDigit, digits;
    scanf("%d", &num);
    /* Find last digit */
    lastDigit  = num % 10;
    /* Find total number of digit - 1 */
    digits     = (int)log10(num); 
    /* Find first digit */
    firstDigit = (int)(num / pow(10, digits)); 
    swappedNum  = lastDigit;
    swappedNum *= (int) pow(10, digits);
    swappedNum += num % ((int) pow(10, digits));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;
    printf("%d", swappedNum);
    return 0;
}