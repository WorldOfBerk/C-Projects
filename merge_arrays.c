/*************************************************************
 * A program that can merge two arrays.
 * **********************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[100], arr2[100], arr3[100];
    int i, j, k, l, m;
    
    printf("Enter the size of first array > ");
    scanf("%d", &k);
    
    printf("Enter your elements for the first array: \n");
    for(i = 0; i < k; i++)
    {
        printf("Enter %d. element > ", i + 1);
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the size of seocnd array > ");
    scanf("%d", &l);
    
    printf("Enter your elements for the second array: \n");
    for(i = 0; i < l; i++)
    {
        printf("Enter %d. element > ", i + 1);
        scanf("%d", &arr2[i]);
    }
    
    i = 0;
    j = 0;
    m = 0;
    
    while(i < k && j < l)
    {
        if(arr1[i] < arr2[j])
        {
           arr3[m] = arr1[i];
           m++;
           i++;
        }
        else
        {
            arr3[m] = arr2[j];
            m++;
            j++;
        }
    }
    
    while(i < k)
    {
        arr3[m] = arr1[i];
        m++;
        i++;
    }
    
    while(j < l)
    {
        arr3[m] = arr2[j];
        m++;
        j++;
    }
    
    printf("The merged array is > ");
    for(i = 0; i < m; i++)
    {
        printf("%d%c", arr3[i], ' ');
    }
    

    return 0;
}
