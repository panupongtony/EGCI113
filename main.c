#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int a,b,c;
    float x1, x2;
    printf("Enter the coefficients:");
    scanf("%d,%d,%d",&a,&b,&c);
    switch(a)
        {
        case 1:printf("x^2");
        case 0:break;
        case -1:printf("-x^2");
        default: printf("%dx^2",a);
        }
    if(a!=0&&b>0) printf("+");
    switch(b)
        {
        case 1:printf("x");
        case 0:break;
        case -1:printf("-x");break;
        default: printf("%dx",b);
        }
    if((a!=0||b!=0)&&c>0) printf("+");
    if(c!=0) printf("%d=0",c);
    printf("\n");


    x1=(-b+(sqrt(b*b-4*a*c)))/(2*a);
    x2=(-b-(sqrt(b*b-4*a*c)))/(2*a);
    if((pow(b,2)-(4*a*c)<0))
       {
        printf("no solutions");
        }else if(a==0&&b!=0)
        {
            printf("x = -c/b = -%d/%d",c,b);
        }else if(a==0&&b==0&&c!=0)
        {
            printf("no solutions");
        }else if(a==0&&b==0&&c==0)
        {
            printf("infinitely many solutions");
        }
        else (x1!=x2? printf("the roots are %.1f and %.1f",x1,x2):
             printf("the root is %.1f",x1) );


            return 0;
    }
