#include <stdio.h>

int main()
{
    int a,b,c,min,max;
    printf("Input 3 numbers:");
    scanf("%d,%d,%d", &a, &b,&c);
    (a<b&&a<c?  printf("The minimum value is %d\n",a):
                       b<c? printf("The minimum value is %d\n",b):
                       printf("The minimum value is %d\n",c));
    (a>b&&a>c?  printf("The maximum value is %d\n",a):
                       b>c? printf("The maximum value is %d\n",b):
                       printf("The maximum value is %d\n",c));
    return 0;
}








