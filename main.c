#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Insert a number\n");
    scanf("%d",&a);
    int i = 2;
    int printflag=1;
    while(i<=a/2)
        {
        if(a%i==0){
            printflag = 0;
            printf("Not Prime number");
            break;
        }
        i++;
    }
    if(printflag==1) printf("Prime number");
    return 0;
}
