#include <stdio.h>
#include <string.h>

void fun(int n, int i){
    
    printf("%d\n",i);
}

int main(){
    //write your code here
    int n;
    scanf("%d", &n);

    fun(n, 1);
}