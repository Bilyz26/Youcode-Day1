#include <stdio.h>


 unsigned long long int  fac(int n)
{
for(int i=1;i<=n;i++)
{
    unsigned long long int fact;
    fact*=i;
    return fact;
}

}
int main()
{
    int nn1;
    printf("entre n1:");
    scanf("%d",&nn1);

   printf("%lld ",fac(nn1) ) ;

    return 0;
}
