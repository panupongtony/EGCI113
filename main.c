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
        printf("no solutions");
        }else if(a==0&&b!=0)
        {
            float x = (float)-c/b;
            printf("the root is %f",x);
        }else if(a&&b==0&&c!=0)
        {
            printf("no solutions");
        }else if(a&&b==0&&c==0)
        {
            printf("infinitely many solutions");
        }
        else (x1!=x2? printf("the roots are %.1f and %.1f",x1,x2):
              printf("the root is %.1f",x1) );
    return 0;
}


