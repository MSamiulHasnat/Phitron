#include <stdio.h>

int main(){
    //write your code here
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i%3==0 && i%7==0) printf("%d\n", i);
    }
}