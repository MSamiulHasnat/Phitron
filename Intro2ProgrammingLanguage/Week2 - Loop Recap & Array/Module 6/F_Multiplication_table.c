#include <stdio.h>

int main(){
    //write your code here
    int line = 12, n;
    scanf("%d", &n);

    for(int i = 1; i <= 12; i++){
        printf("%d * %d = %d\n", n, i, n*i);
    }
}