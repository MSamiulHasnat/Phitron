#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    char string[1000001];

    fgets(string, 1000001, stdin);
    for(int i = 0; string[i] != '\\'; i++){
        printf("%c", string[i]);
    }
}