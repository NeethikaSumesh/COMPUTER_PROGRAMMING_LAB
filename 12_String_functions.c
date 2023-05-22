/* 
AIM     : To write a program to perform string manipulation functions like string concatenations,comparison,find the length and copy without using library functions 
Done by : Neethika Sumesh 
Date    : 30/07/2021
*/

#include<stdio.h>
int main(){
    char s1[50],s2[50],con_string[50];
    int choice,option,length1,length2,i,count;
do{
    printf("\n---------------------\n");
    printf("1.length of strings\n2.compare strings\n3.concatenation of strings\n4.string copy");
    printf("\n---------------------\n");

    
        printf("\n\nEnter the choice(1-4) :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the first string :");
            scanf("%s", &s1);
            printf("Enter the second string :");
            scanf("%s", &s2);
            length1 = 0;
            for ( i = 0; s1[i]!='\0'; i++)
            {
                length1++;
            }
            printf("Length of first string = %d\n",length1);
            
            length2 = 0;
            for ( i = 0; s2[i]!='\0'; i++)
            {
                length2++;
            }
            printf("Length of second string = %d\n",length2);
            break;

        case 2:
            printf("comparison of two srings : ");
            if (length1!=length2)
            {
                printf("Strings are not equal");
            }else{
                for ( i = 0; i < length1; i++)
                {
                    if(s1[i]==s2[i]){
                        count++;
                    }
                }
                if(count == length1){
                    printf("Strings are equal");
                }else{
                    printf("Strings are not equal");
                }
                
            }
            break;

        case 3:

            for ( i = 0; i < length1; i++)
            {
                con_string[i] = s1[i];
            }
            for ( i = length1; i < length1+length2; i++)
            {
                con_string[i]=s2[i-length1];
            }
            con_string[i]='\0';
            printf("\nconcatenated string = %s",con_string);
            break;
            
        case 4:
            for ( i = 0; i < length1; i++)
            {
                s2[i]=s1[i];
            }
            s2[i]='\0';
            printf("\nAfter copying string1 to string2 : \n\tstring 2 =%s",s2);
            break;
            
        
        default:
           printf("something went wrong ,try again");
            break;
        }
        printf("\nDo you want to continue? if yes enter 1 :");
        scanf("%d", &option);
}while(option==1);
    
    return 0;
}





