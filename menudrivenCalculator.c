/*Title : Menu Driven Calculator
done by Neethika Sumesh
Aim : To write a simple menu driven calculator program using switch statement*/

#include<stdio.h>
int main(){
    float num1,num2;
    int choice,option;
    do
    {
        printf("Enter two numbers:");
        scanf("%f%f",&num1,&num2);
        printf("\n1.Addition \n2.Substraction \n3.Multiplication \n4.Division");
        printf("\n select your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Addition result = %.2f\n",(num1 + num2));
            break;
        case 2:
            printf("Substraction result = %.2f\n",(num1 - num2));
            break;
        case 3:
            printf("Multiplication result = %.2f\n",(num1 * num2));
            break;
        case 4:
              if (num2 == 0)
              {
                  printf("division not possible\n");
              }else{
                  printf("Division result = %.2f\n",(num1 / num2));
              }
            break;
        default:
            printf("wrong choice\n");
            break;
        }
        printf("Do you want to continue?\n if yes enter 1 if No enter 0:");
        scanf("%d",&option);
    } while (option==1);
    
    return 0;
}