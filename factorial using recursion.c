#include<stdio.h>

int fact(int n)
{
    if(n==1)
        return 1;
    else
    {
        return(n*fact(n-1));
    }
}
int main()
{
    int num;
    printf("ENTER ANY NUMBER :");
    scanf("%d",&num);
    
    printf("THE FACTORIAL OF %d IS %d",num,fact(num));
    return 0;
}
