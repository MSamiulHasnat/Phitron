#include <stdio.h>
#include <string.h>

int fun(char a[], int i){
    if(a[i] == '\0') return 0;
    int l = fun(a, i + 1);
    return l + 1;
}

int main(){
    //write your code here
    char a[100] = "helloBangladesh";
    int length = fun(a, 0);
    printf("%d", length);
}