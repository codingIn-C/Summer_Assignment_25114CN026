#include <stdio.h>

int main()
{
    int n, a=0;
    printf("Enter a number:\n");
    scanf("%d",&n);

    for(int i=1;n>0;i++)
    {
        n=n/10;
        a++;
    }
    printf("%d",a);
    return 0;
}