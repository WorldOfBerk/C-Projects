/******************************************************************************

A program that divides two numbers.

*******************************************************************************/
#include <stdio.h>

int main ()
{
  int n1;
  int n2, div;
  
  printf("Enter two integers: ");
  scanf("%d %d", &n1, &n2);
  
  div = n1 / n2;
  
  printf("Division of two numbers is:= %d\n", div);
    
  return 0;
}
