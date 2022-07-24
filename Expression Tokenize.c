#include <stdio.h>

int main(){
char arr[100];
printf("Give your expression:");
scanf("%s", &arr);

for(int i=0; i<5; i++ )
    //61 for =
    //43 for + | 45 for - | 47 for / 37 for %
if(arr[i] == 61 || arr[i] == 43 || arr[i] == 45 || arr[i] == 47 || arr[i] == 37){
   printf("%c is a operator\n", arr[i]);
}else{
    printf("%c is a identifier\n", arr[i]);
}

}

