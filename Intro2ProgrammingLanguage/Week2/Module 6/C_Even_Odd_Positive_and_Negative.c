#include <stdio.h>

int main(){
    //write your code here
    int n, EvenCount = 0, OddCount = 0, PositiveCount = 0, NegativeCount = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int a;
        scanf("%d", &a);

        if(a % 2 == 0) EvenCount++;
        if(a & 1) OddCount++;
        if(a > 0) PositiveCount++;
        if(a < 0) NegativeCount++;
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", EvenCount, OddCount, PositiveCount, NegativeCount);
}