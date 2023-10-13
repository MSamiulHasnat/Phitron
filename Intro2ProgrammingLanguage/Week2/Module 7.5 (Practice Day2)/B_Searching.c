#include <stdio.h>

int main(){
    //write your code here
    int length, checkNum;
    scanf("%d", &length);

    int array[length];
    for(int i = 0; i < length; i++){
        scanf("%d", &array[i]);
    }

    scanf("%d", &checkNum);

    int count = 0;
    for(int i = 0; i < length; i++){
        if(checkNum == array[i]) {
            printf("%d\n", i);
            count = 1;
            break;
        }
    }

    if(count == 0) printf("-1\n");
}