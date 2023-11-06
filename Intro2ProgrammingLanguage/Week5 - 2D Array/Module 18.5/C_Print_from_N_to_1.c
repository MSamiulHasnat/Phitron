#include <stdio.h>
#include <string.h>

void fun(int n, int i){
    if(i == n+1) return;
    fun(n, i+1);
    printf("%d ", i);
}

int main(){
    //write your code here
    int n;
    scanf("%d", &n);

    fun(n, 2);
    printf("1");
}