/*****************************************************
 * A program that can reverse the entered string.
 * **************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[60];
    int temp, i;

    printf("Enter your string here: ");

    fgets(str, sizeof(str), stdin);

    temp = strlen(str);

    for(i = temp - 1; i >= 0; i--) 
    {
        printf("%c", str[i]);        
    }
    
    return 0;
}