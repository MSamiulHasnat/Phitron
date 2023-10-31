#include <stdio.h>
#include <string.h>

void odd_even(){
    int length;
    scanf("%d", &length);

    int array[length];
    for(int i =0; i < length; i++){
        scanf("%d", &array[i]);
    }
    int countEven = 0, countOdd = 0;

    for(int i = 0; i < length; i++){
        if(array[i] % 2 == 0) countEven++;
        else countOdd++;
    }

    printf("%d %d", countEven, countOdd);
}

int main(){
    //write your code here

    odd_even();
}