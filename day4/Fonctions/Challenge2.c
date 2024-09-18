#include <stdio.h>


void  sum(int n1,int n2)
{
    printf("%d x %d = %d ",n1,n2,n1*n2);
}
int main()
{
    int nn1,nn2;
    printf("entre n1:");
    scanf("%d",&nn1);
        printf("entre n2:");
    scanf("%d",&nn2);
    sum(nn1,nn2);

    return 0;
}
