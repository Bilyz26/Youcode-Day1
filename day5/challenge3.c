#include <stdio.h>

struct rectangle{
    int longeur;
    int largeur;

};


int recSurface1(int arg1,int arg2)
{
    return arg1*arg2;
}
int recSurface2(struct rectangle r)
{
    return r.largeur*r.longeur;
}




int main()
{
  struct rectangle r1={15,10} ;

  printf(" la surface de rectangles et %d \n",recSurface1(r1.largeur,r1.longeur));
    printf(" la surface de rectangles et %d",recSurface2(r1));


    return 0;
}
