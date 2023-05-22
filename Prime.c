/* 
   AIM     : To write a program to print prime numbers in a given Range
   Done by : Neethika Sumesh
   Date    : 16/7/21
*/

#include<stdio.h>
int main(){
    int i,j,min,max,prime;
    
    printf("Enter the minimum value : ");
    scanf("%d", &min);
    printf("\nEnter the maximum value : ");
    scanf("%d", &max);
    if (min>=2)
    {
        printf("The Prime Numbers are : ");
        for ( i = min; i <= max; i++)
        {
            prime = 1;
            for ( j = 2; j <= i/2; j++)
            {
                if (i % j==0)
                {
                    prime = 0;
                    break;
                }
                
            }
            if (prime==1)
            {
                printf("\t%d",i);
            }
            
            
        }
        
        
    }
    else{
        printf("The minimum value must be greater than 1");
    }
    
    return 0;
}