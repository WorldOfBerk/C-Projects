/* A program that calculate Taylor cosx series*/

#include <stdio.h>
#include <math.h>

#define PI 3.14

int main()
{
    float x, formula = 1, sum = 0;
    int factor = 1, n = 0, i;
    
    printf("\nEnter an angle for cosx > ");
    scanf("%f", &x);
    
    x = x * PI / 180;
    
    while(formula > 0.00001)
    {
        for(i = 1;i < 2 * n;i++)
        {
            factor = factor * i;
        }
    
        formula = (pow(-1,n)*pow(x,2*n))/(factor);
        n += 1;
        
        sum += formula;
    }
    
    printf("%f", sum);
    
    return 0;
}
