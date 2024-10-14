#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    long long int a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);
    
    if(a % k == 0 && b % k == 0) printf("Both\n");
    else if(a % k == 0) printf("Memo\n");
    else if(b % k == 0) printf("Momo\n");
    else printf("No One\n");
}