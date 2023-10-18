#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    char stringA[11], stringB[11];
    scanf("%s %s", stringA, stringB);

    int stringSizeA = strlen(stringA);
    int stringSizeB = strlen(stringB);

    printf("%d %d\n", stringSizeA, stringSizeB);
    printf("%s%s\n", stringA, stringB);
    
    char temp = stringA[0];
    stringA[0] = stringB[0];
    stringB[0] = temp;

    printf("%s %s\n", stringA, stringB);
}