#include <stdio.h>
#include <string.h>

void print(int n){
    for(int i = 1; i <= n; i++){
        printf("%d", i);
        if(i == n) break;
        printf(" ");
    }
}

int main(){
    //write your code here
    int n;
    scanf("%d", &n);
    print(n);
}