/*
Find negative number
*/
#include<stdio.h>
int main(){
int arr[100], i, N;
printf("Enter the size of the array : " );
scanf("%d",&N);
printf("Enter element in the array : " );
for(i=0;i<N;i++){
    scanf("%d",&arr[i]);
}
printf("\nNegative element in array " );
for(i=0;i<N;i++){
    if(arr[i]<0){
        printf("%d", arr[i] );
    }
}
return 0;
}

