/* Title : Elecricity Bill Preparation
Done by : Neethika Sumesh
*/

#include<stdio.h>
int main(){
    float unit,amount;
    printf("Enter the units of current consumed:");
    scanf("%f", &unit);
    if (unit <= 100)
    {
        amount = (unit * 1);
    }else if (unit > 100 && unit <= 300)
    {
        amount = 100 + ((unit -100)*2);
    }else{
        amount = 500 + ((unit - 300)*3);
    }
    printf("Electricity Bill is Rs. %f",amount);
    
    return 0;
}