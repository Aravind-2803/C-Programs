 #include <stdio.h>
#include<math.h> 
int main()
{
    double principal=10000;
    double rate=5,time=2;
    double amount=principal*((pow((1+rate/100),time)));
    double CI = amount-principal;
    printf("compound interest is : %lf",CI);
    return 0;
}
