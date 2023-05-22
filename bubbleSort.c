/*AIM  : To write a program to sort the given numbers 
         using Bubble sort
Done by : Neethika Sumesh
Date    : 23/07/2021  */

#include<stdio.h>
int main(){

    int array[20],n,i,j,temp;
    printf("Enter the size of the array :");
    scanf("%d", &n);

    printf("\nEnter the array elements :");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for ( i = 0; i < n - 1; i++)
    {
        for ( j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            
        }
        
    }
    printf("\n Array elements after sorting are :");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",array[i]);
    }
    return 0;
}