#include <stdio.h>

int main(){
    //write your code here
    int length;
    scanf("%d", &length);

    int array[length];
    for(int i = 0; i < length; i++){
        scanf("%d", &array[i]);

        if(array[i] <= 10) printf("A[%d] = %d\n", i, array[i]);
    }
};