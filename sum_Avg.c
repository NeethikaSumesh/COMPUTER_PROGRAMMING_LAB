/* AIM :To write a program to print the 
        sum and average of elements in an array
   Done by : Neethika Sumesh
   Date : 23/07/2021 */
#include<stdio.h>
int main(){
    
    int array[20],i,n;
    float sum = 0, avg = 0;

    printf("Enter the size of the array :");
    scanf("%d", &n);

    printf("Enter the array elements :");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&array[i]); 
    }
    printf("Elements in array :");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
    
    for ( i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }
    printf("\n sum = %.2f", sum);

    avg = sum / n;
    printf("\n avg = %.2f", avg);
    
    return 0;
}