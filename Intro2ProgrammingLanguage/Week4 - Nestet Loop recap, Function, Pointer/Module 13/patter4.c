#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    int n; 
    // scanf("%d", &n);
    n = 5;

    int space = n - 1;
    int star = 1;
    int totalLine = n * 2 - 1;

    for(int i = 1; i <= totalLine; i++){
        for(int j = 1; j <= space; j++) printf(" ");
        for(int j = 1; j <= star; j++) printf("*");
        printf("\n");

        if(i <= n - 1) {
            space--;
            star += 2;
        }
        else {
            space++;
            star -= 2;
        }
    }
}