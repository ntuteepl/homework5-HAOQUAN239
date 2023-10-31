#include <stdio.h>
#include <stdlib.h>

int main()
{
   int H,M;
   double angle,hd,md;
   scanf("%d%d",&H,&M);
   hd=H*30+M*0.5;
   md=6*M;
   if(hd>md)
   {
    angle=hd-md;
   }
   else
   {
    angle=md-hd;
   }
   if(angle>180)
   {
       angle=360-angle;
   }
   printf("%.3f",angle);
}

