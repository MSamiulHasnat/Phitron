#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    char string[1000001];

    int sum = 0;
    scanf("%s", string);
    for(int i = 0; i < strlen(string); i++){
        sum += (string[i] - '0');
    }

    printf("%d", sum);
}