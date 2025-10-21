#include<stdio.h>
#include "arraylib.h"

int findMaxIndex(int arr[],int size){
    int m = 0;
    for(int i=1;i<size;i++){
        if(arr[i]>arr[m]){
            m=i;
        }
    }
    return m;
}

int findMinIndex(int arr[],int size){
    int min = 0;
    for(int i =1;i<size;i++){
        if(arr[i]<arr[min]){
            min = i;
        }
    }
    return min;
}


float findaverage(int arr[],int size){
    int s =0;
    for (int i = 0; i < size; i++)
    {
        s = s + arr[i];
    }
    return (float)s / size;
    
}


void displayArray(int arr[], int size){
    for (int  i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
       
    }
     printf("\n");
    
}


void reverseArray(int arr[],int size){
    for(int i =0;i<size/2;i++){
        int t = arr[i];
        arr[i] = arr[size -1 - i];
        arr[size -1 - i] = t;
    }
}


void sortArray(int arr[],int size){
    for(int i=0;i<size - 1; i++){
        for(int j = 0;j<size - i - 1;j++){
            if(arr[j]>arr[j+1]){
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}


int linearSearch(int arr[],int size,int value){
    for(int i = 0; i<size;i++){
        if(arr[i]==value){
            return i;
        }
    }
    return -1;
}