#include <stdio.h>

int main(){
    //write your code here
    long long int a, b, c;
    long long int d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

//    if(a + b + c == d) printf("YES\n");
    if(a + b - c == d) printf("YES\n");
    else if(a + b * c == d) printf("YES\n");
    else if(a - b + c == d) printf("YES\n");
    //else if(a - b - c == d) printf("YES\n");
    else if(a - b * c == d) printf("YES\n");
    else if(a * b + c == d) printf("YES\n");
    else if(a * b - c == d) printf("YES\n");
    //else if(a * b * c == d) printf("YES\n");
    else  printf("NO\n");
}