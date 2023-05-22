/*
AIM : To write a program to print the factorial of the given number using Recursive function
Done by : Neethika Sumesh
Date : 06/08/21
*/
#include <stdio.h>

int fact(int);

void main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    
    printf("\n The factorial of the given number is :%d",fact(num));
}

int fact(int num)
{
    if (num==0 || num==1)
    {
        return 1;
    }else{
        return num*fact(num-1);
    }
    
    
}
