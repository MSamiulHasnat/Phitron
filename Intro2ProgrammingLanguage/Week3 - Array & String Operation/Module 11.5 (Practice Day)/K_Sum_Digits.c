#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    int length, summation = 0;
    scanf("%d", &length);

    char array[length];
    scanf("%s", array);
{
    // int value;
    // scanf("%d", &value);

    // while(value > 0){
    //     if(value % 10 != 0) {
    //         summation += value % 10;
    //         value /= 10;
    //     }
    // }
}

    for(int i = 0; i < length; i++){
        summation += array[i] - 48;
    }
    printf("%d\n", summation);
}