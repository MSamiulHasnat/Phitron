#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    int testCase;
    scanf("%d", &testCase);

    while(testCase--){
        char string[101];
        scanf("%s", string);

        int strSize = strlen(string);
        if(strlen(string) > 10){
            printf("%c%d%c\n", string[0], strSize - 2, string[strSize - 1]);
        }
        else printf("%s\n", string);
    }
}