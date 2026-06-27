#include <stdio.h>
int main(){
    int a=0, n, t;
    printf("Enter a number: ");
    scanf("%d", &n);

    int z = n; //To store the original no

    for(int i=0; n!=0; i++)
    {
        t = n % 10;
        a = t+(10*a);
        n = n/10;
        
    }
    
    if(a==z){
    printf("The number is a palindrome.");
    }
    else
    printf("The number is not a palindrome.");
    
    return 0;
}