#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c;
    float x1,x2;
    printf("Enter a,b,c,:");
    scanf("%d,%d,%d",&a,&b,&c);
    x1=(-b+(sqrt(b*b-4*a*c)))/(2*a);
    x2=(-b-(sqrt(b*b-4*a*c)))/(2*a);
    if((pow(b,2)-(4*a*c)<0))
       {
        printf("NULL");
        }
        else printf("the roots are %.1f and %.1f",x1,x2);
    return 0;
}

