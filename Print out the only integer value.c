/*
Print out the only integer value.
*/

#include<stdio.h>
#include<math.h>

int main(){

	 int i,n;
	 float a[100];

	 printf("Enter the size of the array : ");
	 scanf("%d",&n);

	 printf("Please enter elements of array: \n");
	 for(i=0;i<n;i++){
	     scanf("%f",&a[i]);
	 }

	 printf("Integer numbers are: ");

        for(i=0;i<n;i++){
            int x = ceil(a[i]);

            if( x == a[i])
            {
                printf(" %.0f ",a[i]);
            }
            else continue;

        }

        return 0;

}
