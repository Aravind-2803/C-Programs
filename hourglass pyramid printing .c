#include <stdio.h>

int main() {
    int n = 5;

    for (int p = 0; p < 2 * n - 1; p++) 
    {

        int comp;
        if (p < n)
            comp = 2 * (n - p) - 1;
        else comp = 2 * (p - n + 1) + 1;

        for (int q = 0; q < 2 * n - comp - 1; q++)
            printf(" ");

        for (int r = 0; r < comp; r++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
