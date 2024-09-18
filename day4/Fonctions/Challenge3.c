#include <stdio.h>


void  max(int n1,int n2)
{
    if(n1-n2<=0)
    {
           printf("%d",n2);
    }
    else
    {
                   printf("%d",n1);

    }
}
int main()
{
    int nn1,nn2;
    printf("entre n1:");
    scanf("%d",&nn1);
        printf("entre n2:");
    scanf("%d",&nn2);
    max(nn1,nn2);

    return 0;
}
