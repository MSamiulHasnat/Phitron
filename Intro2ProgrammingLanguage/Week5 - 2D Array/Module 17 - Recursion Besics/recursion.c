#include <stdio.h>
#include <string.h>

void fun(int n, int i){
    if(i == n+1) return;
    printf("%d\n",i);
    fun(n, i + 1);
}

int main(){
    //write your code here
    int n; 
    scanf("%d", &n);

    fun(n, 1);
}