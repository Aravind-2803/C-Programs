#include<stdio.h>
int main()
{
    int a,b,sum,carry;
    printf("ENTER TWO INTWGERS:");
    scanf("%d %d",&a,&b);
    while(b)
    {
        carry=a&b;
        a=a^b;
        b+carry<<1;
    }
    printf("sum=%d",a);
    return 0;
}
