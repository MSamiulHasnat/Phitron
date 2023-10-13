#include <stdio.h>

int main(){
    //write your code here
    int a, b;
    scanf("%d %d", &a, &b);

    if(a >= b){
        if(a % b == 0) printf("Multiples\n");
        else printf("No Multiples\n");
    }

    else if(a <= b){
        if(b % a == 0) printf("Multiples\n");
        else printf("No Multiples\n");
    }

    
}