#include <stdio.h>
#include <string.h>

long long int fact(int n){
    if(n == 0) return 1;
    else{
        return n * fact(n-1);
    }
}

int main(){
    //write your code here
    int n;
    scanf("%d", &n);

    long long int res = fact(n);
    printf("%lld", res);
}