#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float a,b,c;
    float x1, x2;
    printf("Enter the coefficients:");
    scanf("%f,%f,%f",&a,&b,&c);
    switch((int)a)
        {
        case 1:printf("x^2");
        case 0:break;
        case -1:printf("-x^2");
        default: printf("%dx^2",(int)a);
        }
    if(b>0) {
        printf("+%.2fx",b);
    }else if(b<0){
        printf("%.2fx",b);
    }else printf("");

    if(c>0&&a==0&&b==0){printf("+%.2f = 0\n",c);}
    else if(c>0){printf("+%.2f\n",c);}
    else if(c<0){printf("%.2f\n",c);}
    else printf("\n");



    x1=(-b+(sqrt(b*b-4*a*c)))/(2*a);
    x2=(-b-(sqrt(b*b-4*a*c)))/(2*a);
    if((pow(b,2)-(4*a*c)<0))
       {
        printf("no solutions");
        }else if(a==0&&b!=0)
        {
            printf("x = -c/b = -%.2f/%.2f",c,b);
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

