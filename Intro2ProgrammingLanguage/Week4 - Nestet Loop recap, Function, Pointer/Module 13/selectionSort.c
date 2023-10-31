#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    int length;
    scanf("%d", &length);

    int array[length];
    for(int i = 0; i < length; i++){
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < length - 1;){
        for(int j = i + 1; j < length; j++){
            if(array[i] > array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for(int i = 0; i < length; i++){
        printf("%d ", array[i]);
    }
}