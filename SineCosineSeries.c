/*
AIM : To write a program to print sine and cosine series
Done by : Neethika Sumesh
Date : 16/07/21
*/

#include<stdio.h>
#include<math.h>
#define PI 3.14159

int main(){
    
    int n,i,fact = 1,sign = -1;
    float a,sum_cos = 1,sum_sine,t = 1,angle;

    printf("Enter the value of the angle in degree : ");
    scanf("%f", &a);
    printf("Enter the value of n : ");
    scanf("%d", &n);

    a = a * PI/180;

    for ( i = 1; i <= n; i++)
    {
        t = t*(-1)*a*a/(2*i*(2*i-1));
        sum_cos = sum_cos + t;
    }
    printf("\nThe cosine value is : %f",sum_cos);

    sum_sine = a;

    for ( i = 3; i <=n; i+=2)
    {
        fact = fact * i * (i-1);
        sum_sine = sum_sine + sign * pow(a,i) / fact;
        sign = -sign;
    }

    printf("\n The value of sine is : %f",sum_sine);
    
    return 0;
}