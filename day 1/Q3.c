#include <stdio.h>

int main()
{
    int a=1,n=0,i;
    printf("Enter a factorial number:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        a=a*i;
    }
    printf("\n%d",a);
}