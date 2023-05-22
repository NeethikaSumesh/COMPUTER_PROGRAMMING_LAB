/*
 AIM : To write a program to perform sequential and binary search using functions
Done by : Neethika Sumesh
Date : 6/8/21
*/
#include <stdio.h>

int binarySearch(int array[50],int n,int key);
int sequentialSearch(int array[50],int n,int key);
int i;
int main(){
    
    int array[50];
    int n,option,key,pos,j,temp;

    printf("Enter the size of the array : ");
    scanf("%d",&n);
    
    printf("\nEnter the elements in array : ");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    printf("\nElements in array                  :");
    for(i=0;i<n;i++){
        printf("\t%d",array[i]);
    }

    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j]= array[j+1];
                array[j+1]= temp;
            }
        }
    }

    printf("\nElements in the array After sorting :");
    for(i=0;i<n;i++){
        printf("\t%d",array[i]);
    }

    printf("\n\n Enter the key element you want to search :");
    scanf("%d",&key);
    
    printf("\n Enter the search the user want to perform \n\t 1 Binary Search \n\t 2 Sequential Search");
    printf("\n Enter the option:");
    scanf("%d",&option);

    switch (option)
    {
    case 1:
        pos = binarySearch(array,n,key);
        if(pos == -1){
            printf("\n The key element not found");
        }else{
            printf("\n%d is found at the %dth position",key,(pos+1));
        }
        
        break;
    case 2:
        
        pos = sequentialSearch(array,n,key);
        if(pos == -1){
            printf("\n The key element not found ");
        }else{
            printf("\n%d is found at the %dth position",key,(pos+1));
        }
        break;
    
    default:
        printf("\nInvalid Entry");
        break;
    }

    return 0;
}

int binarySearch(int array[50],int n,int key){
    int low,high,mid;
    low=0;
    high=n-1;
    
    while(low<=high){
        mid = (low+high)/2;
        if(key == array[mid] ){
            return mid;
        }else if(key < array[mid]){
            high = mid -1;
        }else{
            low = mid +1;
        }
    }

    return -1;
}

int sequentialSearch(int array[],int n,int key){
    for(i=0;i<n;i++){
        if(array[i]==key){
            return i;
        }
    }

    return -1;
}