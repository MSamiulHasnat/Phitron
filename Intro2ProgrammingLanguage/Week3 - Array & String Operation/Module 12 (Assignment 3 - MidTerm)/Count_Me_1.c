#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    int length;
    scanf("%d", &length);

    int array[length];
    int count2 = 0, count3 = 0;
    for(int i = 0; i < length; i++){
        scanf("%d", &array[i]);
        if(array[i] % 2 == 0 && array[i] % 3 == 0) {
            count2++;
            continue;
        }
        if(array[i] % 2 == 0) count2++;
        if(array[i] % 3 == 0) count3++; 
    }

    printf("%d %d", count2, count3);
}