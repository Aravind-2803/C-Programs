#include <stdbool.h>
#include <stdio.h>
#include <math.h>

bool isPrime(int n)
{
    if (n == 1 || n == 0)
        return false;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int N ;
    
    printf("ENTER THE ENDING NUMBER :");
    scanf("%d",&N);
    
    printf("THE PRIME NUMBERS FROM 1 TO %d is :",N);
    
    
    for (int i = 1; i <= N; i++) {
        if (isPrime(i)) {
            printf(" %d \t", i);
        }
    }

    return 0;
}
