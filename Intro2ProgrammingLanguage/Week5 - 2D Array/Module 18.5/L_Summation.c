#include <stdio.h>
#include <string.h>

long long int sum(long long int a[], long long int n, long long int i, long long int s){
    if(n == i) return s;
    s += a[i];
    sum(a, n, i + 1, s);
    return s;
}

int main(){
    //write your code here
    long long int n;
    scanf("%lld", &n);

    long long int a[n];
    for(int i = 0; i < n; i++){
        scanf("%lld", &a[i]);
    }

    long long int s = sum(a, n, 0, 0);
    printf("%lld\n", s);
}
//not solved yet