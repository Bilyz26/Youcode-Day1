#include <stdio.h>
int main()
{
   float x1,x2,y1,y2,px,py ;
   printf("entre x1: ");
   scanf("%f",&x1);

   printf("entre y1: ");
   scanf("%f",&y1);

   printf("entre x2: ");
   scanf("%f",&x2);

   printf("entre y2: ");
   scanf("%f",&y2);

   printf("entre px: ");
   scanf("%f",&px);

   printf("entre py: ");
   scanf("%f",&py);
   if((px-x1)*(y2-y1)==(py-y1)*(x2-x1))
   {
       printf("segment");
   }else
          printf("no segment");



return 0;
}
