#include <stdio.h>
int main(){
    int a=1, n, t;
    printf("Enter a number: ");
    scanf("%d", &n);

   for(int i=0; n!=0; i++)
    {
           t = n % 10;
           a = t*a;
           n = n/10;
        
       }

       printf("The reversed number is: %d\n", a);
    return 0;
}