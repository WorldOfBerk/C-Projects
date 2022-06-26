#include <stdio.h>
#include <math.h>
#include <string.h>

long decimalToBinary(int decimalnum)
{
        long binarynum = 0;
        int rem, temp = 1;
        while (decimalnum!=0){
            rem = decimalnum%2;
            decimalnum = decimalnum /2;
            binarynum = binarynum + rem*temp;
            temp = temp *10;
        }
        
        return binarynum;
}

void sort_numbers_ascending(int a[], int n)
{
   int temp, i, j, k;
   for (j = 0; j < n; ++j)
   {
      for (k = j + 1; k < n; ++k)
      {
         if (a[j] > a[k])
         {
            temp = a[j];
            a[j] = a[k];
            a[k] = temp;
         }
      }
   }
   printf("Numbers in ascending order:\n");
   for (i = 0; i < n; ++i)
      printf("%d\n", a[i]);
}

void czg()
{
    printf("--------------------------------------------");
}

int main()
{
    int i, n, a[100], num, qnum, max, min, k, l, m, decimalnum, fnum, fact=1;
    int temp1,temp, number, fno, sno, *ptr1=&fno,*ptr2=&sno;
    char name[50];
    
    printf("Welcome to the multi processing program UwU \n");
    czg();
    printf("\nEnter your first name > ");
    scanf("%s", name);
    printf("Hello %s!!", name);
    
    printf("\n1-For create an array and make choices for the array > ");
    printf("\n2-For enter a decimal number and convert to binary number > ");
    printf("\n3-For enter a number for calculating its factorial > ");
    printf("\n4-For find the maximum number between two numbers > ");
    printf("\n5-For QUIT");
    printf("\nEnter your choice > ");
    scanf("%d", &num);
    
    if(num==1){
        printf("How many elements do you want to enter?: ");
        scanf("%d", &n);
        for(i=0;i<n;i++){
           printf("Enter the %d. element > ", i+1);
           scanf("%d", &a[i]);
        }
        printf("\n1-For finding maximum and minimum value of the array > ");
        printf("\n2-For sorting in ascending order > \n");
        scanf("%d",&qnum);
        if(qnum==1){
            max=a[0];
            min=a[0];
            for(i=1;i<n;i++){
                if(a[i]>max){
                    max=a[i];
                }
                if(a[i]<min){
                    min=a[i];
                }
            }
            printf("\nMaximum value of the array is > %d", max);
            printf("\nMinimum value of the array is > %d", min);
        }
        else if(qnum==2){
            sort_numbers_ascending(a, n);
        }
        else{
            printf("Invalid command! forced QUIT!! X_X");
        }
    }
    else if(num==2){
        printf("Enter a decimal number whoose base is ten > ");
        scanf("%d", &decimalnum);
        printf("Equivalency in binary number > %ld",decimalToBinary(decimalnum));
    }
    else if(num==3){
        printf("Enter a number: ");    
        scanf("%d",&fnum);    
        for(i=1;i<=fnum;i++){    
            fact=fact*i;    
        }    
        printf("Factorial of %d is: %d", fnum, fact);    
    }
    else if(num==4){
        printf("Input the first number: ");
         scanf("%d", ptr1);
        printf("Input the second number:");
        scanf("%d", ptr2);
    
        if(*ptr1>*ptr2){
        printf("\n\n %d is the maximum number. \n\n",*ptr1);
        }
    
        else{
        printf("\n\n %d is the maximum number \n\n", *ptr2);
         }
    
    }
    else if(num==5){
        printf("QUIT!!");
    }
    else{
        printf("Invalid command! forced QUIT!! X_X");
    }
    
    return 0;
}

