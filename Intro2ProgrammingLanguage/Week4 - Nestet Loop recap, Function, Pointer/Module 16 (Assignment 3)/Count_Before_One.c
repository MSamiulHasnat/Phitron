#include <stdio.h>
#include <string.h>

long long int count_before_one(int ar[], int length){
    int count = 0;
    for(int i = 0; i < length; i++){
        if(ar[0 + i] != 1){
            count++;
        }
        else if(ar[0 + i] == 1) break;
    }
    return count;
}

int main(){
    //write your code here
    int length;
    scanf("%d", &length);

    int array[length];
    for(int i = 0; i < length; i++){
        scanf("%d", &array[i]);
    }

    int count = count_before_one(array, length);

    printf("%d\n", count);
}

//NOT SOLVED YET