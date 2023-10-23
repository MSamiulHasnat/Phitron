#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    int testcase;
    scanf("%d", &testcase);

    while(testcase--){
        char string[10001];
        scanf("%s", string);

        int countCapital = 0, coutnSmall = 0, countDigit = 0;
        for(int i = 0; i < strlen(string); i++){
            if(string[i] >= 65 && string[i] <= 90) countCapital++;
            if(string[i] >= 97 && string[i] <= 122) coutnSmall++;
            if(string[i] >= 48 && string[i] <= 57) countDigit++;
        }

        printf("%d %d %d\n", countCapital, coutnSmall, countDigit);
    }
}