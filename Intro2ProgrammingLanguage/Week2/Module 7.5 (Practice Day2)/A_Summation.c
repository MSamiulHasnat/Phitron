#include <stdio.h>

int main(){
    //write your code here
    long long int n, sum = 0;
    scanf("%lld", &n);

    long long int array[n];
    for(int i = 0; i < n; i++){
        scanf("%lld", &array[i]);

        sum += array[i];
    }

    if(sum < 0) sum *= -1;
    printf("%lld\n", sum);
}