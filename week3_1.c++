#include <stdio.h>
int main (){

    int a, b, c ;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("max is %d\n", a);
        if (b>c)
        {
            printf("mean is %d\n", b);
            printf("min is %d\n", c);
        }
        else if (c>b)
        {
            printf("mean is %d\n", c);
            printf("min is %d\n", b);
        } 
    }
    else if (b>c && b>a)
    {
        printf("max is %d\n", b);
        if (a>c)
        {
            printf("mean is %d\n", a);
            printf("min is %d\n", c);
        }
        else if (c>a)
        {
            printf("mean is %d\n", c);
            printf("min is %d\n", a);
        } 
    }
    else if (c>b && c>a)
    {
        printf("max is %d\n", c);
        if (a>b)
        {
            printf("mean is %d\n", a);
            printf("min is %d\n", b);
        }
        else{
            printf("mean is %d\n", b);
            printf("min is %d\n", a);
        }
    }
    return 0 ;
}