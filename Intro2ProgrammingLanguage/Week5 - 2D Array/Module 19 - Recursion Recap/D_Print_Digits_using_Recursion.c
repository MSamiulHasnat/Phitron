#include <stdio.h>
#include <string.h>

void digit(long long int n){
    if(n <= 0) return;
    int d = n % 10;
    digit(n / 10);
    printf("%d ", d);
}

int main(){
    //write your code here
    int tc;
    scanf("%d", &tc);

    while(tc--){
        long long int n;
        scanf("%lld", &n);
        if(n == 0) printf("0\n");
        else {
            digit(n);
            printf("\n");
        }
    }
}