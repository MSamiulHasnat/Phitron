#include <stdio.h>

int main(){
    //write your code here
    int n;

    while (1){
        scanf("%d", &n);
        if(n == 1999) {
            printf("Correct\n");
            break;
        }
        else printf("Wrong\n");
    }
}