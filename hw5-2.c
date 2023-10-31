#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   double m;
   scanf("%d",&n);
   if(n<=800)
   {
    m=0.9*n;
   }
   if(n>800&&n<1500)
   {
    m=n*0.9*0.9;
   }
   if(n>=1500)
   {
    m=n*0.9*0.79;
   }
   printf("%0.1f",m);
}

