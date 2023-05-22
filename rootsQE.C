/* Title : Roots of Quadratic Equation
Done by :  Neethika Sumesh
*/

#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,k,root1,root2;
    printf("Enter the coefficients a,b,c:");
    scanf("%f %f %f", &a,&b,&c);
    k = (b * b - 4 * a * c);
    if (k > 0)
    {
        printf("Roots are real and distinct:");
        root1 = (-b+sqrt(k))/(2*a);
        root2 = (-b-sqrt(k))/(2*a);
        printf("\nRoots are : %f , %f", root1,root2);
    }else if (k == 0)
    {
        printf("both roots are equal:");
        root1 = root2 = -b / (2*a);
        printf("root1 = root2= %f", root1);
    }else{
        printf("both roots are imaginary:");
    }
    
    
    return 0;
}