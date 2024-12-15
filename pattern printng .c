#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE VALUE OF N :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*i;j++)
        {
            printf(" ");
        }
        for (int k=0;k<2*(n-i)-1;k++)
        {
            printf(" *");
        }
        printf("\n");
    
    }
    return 0;
}
