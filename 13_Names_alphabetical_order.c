/* AIM  : To write a program to arrange names in alphabetical order
   Date   : 30/07/2021
   Done by: Neethika Sumesh */
#include <stdio.h>
#include <string.h>

int main(){
    
    char names[50][50],temp[50];
    int i,j,n;

    printf("\nEnter the number of Names:");
    scanf("%d",&n);

    printf("\nEnter the names one by one :");
    for(i=0;i<n;i++){
        scanf("%s",names[i]);
    }
    printf("\n The Entered Names are          :");
    for(i=0;i<n;i++){
        printf("\t%s",names[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(names[i],names[j])>0){
                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
            }
        }
    }

    printf("\n The entered named after sorting  :");
    for(i=0;i<n;i++){
        printf("\t%s",names[i]);
    } 

    return 0;
}
