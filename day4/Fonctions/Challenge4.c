#include <stdio.h>


void  min(int n1,int n2)
{
    if(n1-n2<=0)
    {
           printf("%d",n1);
    }
    else
    {
                   printf("%d",n2);

    }
}
int main()
{
    int nn1,nn2;
    printf("entre n1:");
    scanf("%d",&nn1);
        printf("entre n2:");
    scanf("%d",&nn2);
    min(nn1,nn2);

    return 0;
}
