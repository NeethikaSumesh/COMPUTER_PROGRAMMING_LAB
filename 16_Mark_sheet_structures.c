/* 
   AIM : To write a program to print the mark sheet of n students using structures
   DATE : 13/08/21
   Done by : Neethika Sumesh
*/
#include<stdio.h>
struct student
{
    int reg_no;
    char name[50];
    float m1,m2,m3,total_mark,avg;
};
int main(){
    int i,n;
    struct student S[100];

    printf("Enter the number of students : ");

    for ( i = 0; i < n; i++)
    {
       printf("\nEnter %d Student Register Number: ",i+1);
       scanf("%d",&S[i].reg_no);
       printf("\nEnter %d Student Name : ",i+1);
       scanf("%s",&S[i].name);
       printf("\nEnter the %d Student marks of 3 subjects out of 100 : ",i+1);
       scanf("%f%f%f",&S[i].m1,&S[i].m2,&S[i].m3);

       S[i].total_mark =S[i].m1+S[i].m2+S[i].m3;
       S[i].avg = S[i].total_mark/3;
    }

    printf("            --------------STUDENT MARK SHEET--------------           ");
    printf("\nslNO.\t\t reg_no\t\t Name\t\tm1\tm2\tm3\ttotal_mark\taverage\n");
    for ( i = 0; i < n; i++)
    {
        printf("\n%d\t\t%d\t\t %s\t\t %.2f\t %.2f\t %.2f\t %.2f\t\t %.2f\n",i,S[i].reg_no,S[i].name,S[i].m1,S[i].m2,S[i].m3,S[i].total_mark,S[i].avg);
    }
    
    

    return 0;
}
