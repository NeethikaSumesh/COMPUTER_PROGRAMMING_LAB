/* Title : Area of rectangle and trianfle
Done by : Neethika sumesh
*/

#include<stdio.h>
int main(){
    float length,width,k=0.5,base,height,area;
    
    printf("\nEnter the length of the rectangle:");
    scanf("%f", &length);
    printf("\nEnter the width of the rectangle:");
    scanf("%f", &width);

    printf("Enter the base of the triangle:");
    scanf("%f", &base);
    printf("Enter the height of the triangle:");
    scanf("%f", &height);

    printf("\nThe area of the rectangle using length and width = %.2f\n", area = (length * width));
    printf("\nThe area of the triangle using base and height = %.2f\n", area = (k * base * height));
    return 0;
}