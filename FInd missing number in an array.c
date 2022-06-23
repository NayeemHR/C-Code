/*
Find missing number in an array.
*/
#include<stdio.h>
int main(){
    int a[] = {1,2,3,5,6,7};
    int i, total, n=6, m=n+1;

    total = m*(m+1)/2;
    for(i=0; i<n;i++){
        total -= a[i];
    }
    printf("The missing number is : %d", total);
}
