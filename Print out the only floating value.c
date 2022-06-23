/*
Print out the only floating value.
*/

#include<stdio.h>
#include<math.h>

int main(){
    int i,n;
    float a[100];

    printf("Enter the size of an array : ");
    scanf("%d",&n);

    printf("Please enter elements of array: \n");
    for(i=0;i<n;i++){
	     scanf("%f",&a[i]);
    }

    printf("Floating numbers are: ");

    for(i=0;i<n;i++){
        int x = ceil(a[i]);
        if ( x == a[i])
            continue;
        else{
            printf("%.2f ",a[i]);
        }
    }

    return 0;

}
