/* AIM     : To write a program to perform matrix addition
             and matrix multiplication
   Done by : Neethika Sumesh
   Date    : 23/07/21
*/

#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10];
    int i,j,k,r1,r2,c1,c2;

    printf("Enter the row size & coloumn size of matrix 1 :");
    scanf("%d%d", &r1, &c1);
    printf("Enter the row size & coloumn size of matrix 2 :");
    scanf("%d%d", &r2, &c2);

    //ADDITION
    
    if (r1 == r2 && c1 == c2)
    {
        printf("Enter elements of matrix 1 :");
        for ( i = 0; i < r1; i++)
        {
            for ( j = 0; j < c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
            
        }
        printf("Enter elements of matrix 2 :");
        for ( i = 0; i < r2; i++)
        {
            for ( j = 0; j < c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
            
        }
        printf("The first matrix is :\n ");
        for(i = 0; i < r1; i++){
            for(j = 0; j < c1; j++){
                printf("\t%d", a[i][j]);
            }
            printf("\n");
        }

        printf("The second matrix is :\n ");
        for(i = 0; i < r2; i++){
            for(j = 0; j < c2; j++){
                printf("\t%d", b[i][j]);
            }
            printf("\n");
        }
        for(i = 0; i < r1; i++){
            for(j = 0; j < c1; j++){
                c[i][j] = a[i][j] + b[i][j];
            }
        }
        printf("\nAfter addition resultant matrix is \n");
        for(i = 0; i < r1; i++){
            for(j = 0; j < c1; j++){
                printf("\t%d", c[i][j]);
            }
            printf("\n");
        }   
    }else{
        printf("Matrix addition not possible ");
    }

    //MULTIPLICATION

    if (c1 == r2)
    {
        for ( i = 0; i < r1; i++)
        {
            for ( j = 0; j < c2; j++)
            {
                c[i][j] = 0;
                for ( k = 0; k < c1; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
                
            }
            
        }
        printf("\n After multiplication Resultant matrix is \n");
        for(i = 0; i < r1; i++){
            for(j = 0; j < c2; j++){
                printf("\t%d",c[i][j]);
            }
            printf("\n");
        }
        
    }else{
        printf("\n Matrix multiplication is not possible");
    }
    
    
    
    return 0;
}