#include <stdio.h>

int main(){
    //write your code here
    int length;
    scanf("%d", &length);

    int array[length];
    for(int i = 0; i < length; i++){
        scanf("%d", &array[i]);
    }

    int position;
    scanf("%d", &position);

    for(int i = position; i < length; i++){
        array[i] = array[i+1];
    }

    for(int i = 0; i < length - 1; i++){
        printf("%d ", array[i]);
    }
}