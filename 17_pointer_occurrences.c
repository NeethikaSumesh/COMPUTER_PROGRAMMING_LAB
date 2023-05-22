/*
   AIM : To write  a program using pointers to access the elements of an array 
         and count the number of occurrences of the given element in the array
   Date :13/08/21
   Done by : Neethika Sumesh
*/
#include<stdio.h>
int main(){
    int array[50],size,num,i,count=0;
    int *p=&array[0];

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    printf("\nEnter the elements of the array : ");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",(p+i));
    }
    printf("\nElements in the array are : ");
    for ( i = 0; i < size; i++)
    {
        printf("\t%d",*(p+i));
    }

    printf("\nEnter the element you want to find its number of occurrence : ");
    scanf("%d",&num);
    for ( i = 0; i < size; i++)
    {
        if (*(p+i)==num)
        {
            count++;
        }
        
    }
    printf("\n The number occurrences of the element %d is %d",num,count);
    
    return 0;
}
