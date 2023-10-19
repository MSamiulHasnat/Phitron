#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    char string1[200], string2[100];
    scanf("%s %s", string1, string2);

    int string1Size = strlen(string1);
    int string2Size = strlen(string2);
    
    for(int i = 0; i < string2Size; i++){
        string1[string1Size] = string2[i];
        string1Size++;
    }

    printf("%s\n", string1);
}