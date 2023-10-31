#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    int n;
    scanf("%d", &n);

    int spaceCount = n - 1;
    for(int line = 1; line <= n; line++){
        for(int space = 1; space <= spaceCount; space++){
            printf(" ");
        }
        for(int num = line; num >= 1; num--){
            printf("%d", num);
        }
        printf("\n");
        spaceCount--;

    }
}