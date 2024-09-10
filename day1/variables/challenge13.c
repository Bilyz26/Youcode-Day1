#include <stdio.h>
int main()
{
    int n;
    char bi[100];
    int pos=0;
    scanf("%d", &n);
    printf("%X\n", n);
    while (n!=0)
    {


        if( n%2==0)
        {
            bi[pos]='0';
        }

        else
        {
            bi[pos]='1';
        }
        n=n/2;
        pos++ ;
    }
    bi[pos]='\0';
    for(int i=pos-1; i>=0; i--)
    {
        printf("%c",bi[i]);
    }


    return 0;
}
