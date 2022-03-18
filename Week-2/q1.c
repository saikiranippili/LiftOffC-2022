//Q1. Chandrashekhar Bhaiya will give treat to intelligent juniors. A junior is said to be intelligent if he/she can check if a number is magic number or not. A number is said to be magic number if sequence of digits that reads the same backwards as forwards. For example, 101 and 20002 are two magic number. So, solve this problem to be eligible for treat from Chandrashekhar Bhaiya. 

#include <stdio.h>
int main()
{
  int num, num2, rev = 0;
  printf("Enter a number: ");
  scanf("%d", &num);
  num2 = num;

  while (num2 != 0)
  {
    rev = rev * 10;
    rev = rev + num2%10;
    num2 = num2/10;
  }
  if (num == rev)
    printf("YES, %d is a Magic Number.\n", num);
  else
    printf("NO, %d isn't a Magic Number.\n", num);
  return 0;
}