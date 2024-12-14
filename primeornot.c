#include <stdio.h>

int main() 
{
    int n,cnt=0;
    printf("ENTER ANY INTEGER :");
    scanf("%d",&n);
    
    if (n <= 1)
        printf("%d is NOT prime\n", n);
    else 
    {
            for (int i = 2; i * i <= n; i++) 
            {
                if (n % i == 0)
                cnt++;
            }

            if (cnt > 0)
                    printf("%d is NOT prime\n", n);

            else
                    printf("%d is prime\n", n);
    }

    return 0;
}
