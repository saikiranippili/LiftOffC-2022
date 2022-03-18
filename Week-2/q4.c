//Q4. An integer is said to be a magic number if it is equal to its reverse. For example, 79197 and 324423 are magic numbers. In this task you will be given an integer x, 1 ≤ x≤ 1000000. You must find the smallest integer y≥ x such that y is a prime number and y is a magic number.

#include <stdio.h>
#include <math.h>
int main()
{
    long num, temp, rev = 0, x, y;
    printf("Enter an integer: \n");
    scanf("%ld", &num);

while (1)
    {
        num++;
        temp = num;
        while(temp)
        {
         rev = rev*10;
         rev = rev + temp%10;
         temp = temp/10;
        }
     if (rev == num)
      {
        y = (int)sqrt(num);
        for (x = 2; x <= y; x++)
      {
       if (num%x == 0)
       break;
      }
       if (x == y+1)
       break;
      }
       rev = 0;
 }
    printf("%ld\n",num);
    return 0;
}