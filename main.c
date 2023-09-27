#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float a,b,c;
    float root1, root2, imaginary;
    scanf("%f,%f,%f",&a,&b,&c);
    float d = pow(b,2)-(4*a*c);
    switch(d>0)
    {
    case 1:
        root1 =(-b+(sqrt(d)))/(2*a);
        root2=(-b-(sqrt(d)))/(2*a);
        printf("the 2 distinct real roots are %.2f and %.2f",root1,root2);
        break;
    case 0:
        switch(d<0)
        {

            case 1:
                root1 = root2 = -b/2*a;
                imaginary = sqrt(-d)/2*a;
                printf("the 2 imaginary real roots are %.2f + i%2.f and %.2f + i%2.f",root1,imaginary,root2,imaginary);
            break;
            case 0:
                root1 = root2 = -b/2*a;
                printf("the 2 same real roots are %.2f and %.2f",root1,root2);
                break;
        }

    return 0;
    }
}

