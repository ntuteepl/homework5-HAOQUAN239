#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,h;
    double m;
    scanf("%d%d",&h,&a);
    if(h<=60)
        {
            m=a*h;
        }
        if(h>60&&h<=120)
            {
                 m=a*(h-60)*1.33+a*60;
            }
            if(h>120)
                {
                    m=a*(h-120)*1.66+a*60*1.33+a*60;
                }
                printf("%0.1f",m);
                }


