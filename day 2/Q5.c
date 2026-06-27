#include <stdio.h>

int main()
{
    int a=0, n;
    printf("Enter a number: ");
    scanf("%d", &n);

   for(int i = 1; n > 0; i++)
       {
           n = n / 10;
           a++;
       }

       printf("The number of digits in the given number is: %d\n", a);

    return 0;
}