#include <stdio.h>

int main(){
    //write your code here
    int length;
    scanf("%d", &length);

    int array[length];

    for(int i = 0; i < length; i++){
        scanf("%d", &array[i]);

        if(array[i] < 0) array[i] = 2;
        else if(array[i] > 0) array[i] = 1;
        else array[i] = 0;

        printf("%d ", array[i]);
    }
}