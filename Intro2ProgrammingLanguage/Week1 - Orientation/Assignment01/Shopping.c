











#include <stdio.h>

int main(){
    //write your code here
    int n;
    scanf("%d", &n);

    if(n > 1000){
        printf("I will buy Punjabi\n");
        if(n-1000 >= 500) printf("I will buy new shoes\nAlisa will buy new shoes\n");
    }
    else printf("Bad luck!\n");
}