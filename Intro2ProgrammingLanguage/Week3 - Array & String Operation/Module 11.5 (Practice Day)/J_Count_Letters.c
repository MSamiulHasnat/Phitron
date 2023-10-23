#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    char array;

    int count[26] = {0};
    int j = 0;
    while(scanf("%c", &array) != EOF){
        int value = array - 'a';
        count[value]++;
    }

    for(int i = 0; i < 26; i++){
        if(count[i] != 0){
            printf("%c : %d\n", i + 'a', count[i]);
        }
    }
}