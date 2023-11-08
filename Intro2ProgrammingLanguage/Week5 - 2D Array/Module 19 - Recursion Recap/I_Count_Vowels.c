#include <stdio.h>
#include <string.h>

void vowel(char str[], int len, int i, int count){
    if(i == len){
        printf("%d", count);
        return;
    }
    char vow[11] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for(int j = 0; j < 12; j++){
        if(str[i] == vow[j]) count++;
    }
    vowel(str, len, i + 1, count);
}

int main(){
    //write your code here
    char str[201];
    fgets(str, 201, stdin);

    int len = strlen(str);
    vowel(str, len, 0, 0);
    // printf("%d", res);
}