#include <stdio.h>
#include <string.h>

int sum(int a, int b){
    int sum = a + b;
    return sum;
}

int main(){
    //write your code here
    int a, b;
    scanf("%d %d", &a, &b);
    int result = sum(a, b);
    printf("%d\n", result);
}