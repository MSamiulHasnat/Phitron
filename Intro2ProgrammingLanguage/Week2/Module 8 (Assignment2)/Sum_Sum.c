#include <stdio.h>

int main(){
    //write your code here
    int n;
    scanf("%d", &n);

    int array[n];
    int positiveSum = 0, negativeSum = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);

        if(array[i] > 0) positiveSum += array[i];
        else negativeSum += array[i];
    }
    printf("%d %d\n", positiveSum, negativeSum);
}