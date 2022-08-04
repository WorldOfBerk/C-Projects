/**************************************************************************
 * A program that can delete desired index in an array.
 * ***********************************************************************/

#include <stdio.h>

int main()
{
    int arr[100];
    int i, j, size;
    int del;
    
    printf("Enter the size of array > ");
    scanf("%d", &size);
    
    for(i = 0; i < size; i++)
    {
        printf("Enter the %d. value: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the index of you wanted to delete > ");
    scanf("%d", &del);
    
    for(i = del; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    
    size--;
    printf("New array is > ");
    for(i = 0; i < size; i++)
    printf("%d %c", arr[i], ' ');

    return 0;
}
