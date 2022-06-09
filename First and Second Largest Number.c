/*
Find out the first and second largest number
*/
#include<stdio.h>
int main(){
    int n, i, temp, arr[100];

    printf("Enter the number of elements:");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[0] < arr[i]){
            temp = arr[0];
            arr[0] = arr[i];
        }else if(temp<arr[i] && arr[0] > arr[i]){
            temp = arr[i];
        }
    }
    printf("First largest element = %d", arr[0]);
    printf("Second largest element = %d", temp);

}
