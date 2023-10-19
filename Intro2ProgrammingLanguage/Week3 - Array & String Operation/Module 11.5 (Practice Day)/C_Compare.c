#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    char stringA[21], stringB[21];
    scanf("%s %s", stringA, stringB);

    for(int i = 0; ; i++){
        if(stringA[i] < stringB[i]){
            printf("%s", stringA);
            break;
        }
        else if(stringA[i] > stringB[i]){
            printf("%s", stringB);
            break;
        }
        
    }
}