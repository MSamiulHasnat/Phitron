#include <stdio.h>

int main(){
    //write your code here
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(n % i == 0) printf("%d\n", i);
    }
}