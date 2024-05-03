
// Brandon Gurley
// Homework 2 Problem 1
#include <stdio.h>
#include <math.h>
int main (void){
    // variable declarations
    int n;
    double a=0;
    double b=0;
    double d=0;
    printf("Please enter an Integer");
    sscanf("%d", &n);
    
    // math to find out the values of a, b and d
    if (n<5)
    {
        int i=1;
        int j=1;
        for (i=1; j<=n; ++i)
        {
            for(j=1; j <= i; ++j)
            {
                a = n(j+(1/i));
            }
        }
        b=sqrt(n);
    }
    if (n>=5 && n<25)
    {
    int i;
        for(i=1; i <= n; ++i)
        {
            a = (i + (i*2));
        }
        b=((n-1)*(n+2))
    }
    if (n>=25)
    {
        a=sqrt(n);
    }
    if (n>=25 && n<45)
    {
       b=ceil(n);
    }
    else if (n>=45)
    {
        b=n;
    }
    switch(n) {
        case 1:
            d=n+sin(n);
            break;
        case 2:
            d=n+sin(n);
            break;
        case 3:
            d=n-3;
            break;
        case 4:
            d=n-3;
            break;
        case 5:
            d=n-3;
            break;
        default:
            d=n*2;
   }
    // ending equation
    double y= a+b-1/2*d;
    printf("The answer is %d", y);
    return 0;
}
