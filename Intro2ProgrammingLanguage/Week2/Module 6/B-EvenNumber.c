#include <stdio.h>

int main(){
    //write your code here
    int n, count = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            printf("%d\n", i);
            count++;
        }
    }
    if(count == 0){
        printf("-1\n");
    }
}