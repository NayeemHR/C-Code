#include <stdio.h>

int main(){
char arr[] = "x=a+b+20";
for(int i=0; i<8; i++ )
if(arr[i] == 61 || arr[i] == 43 || arr[i] == 45 || arr[i] == 47){
   printf("%c is a operator\n", arr[i]);
}else{
    printf("%c is a oparend\n", arr[i]);
}

printf("%d", arr[1]);


}
