#include <stdio.h>

int main(){
    //write your code here
    int length;
    scanf("%d", &length);

    int array[length + 1];
    for(int i = 0; i < length; i++){
        scanf("%d", &array[i]);
    }
    
    int position, value;
    scanf("%d %d", &position, &value);

    for(int i = length; i >= position; i--){
        array[i] = array[i-1];
    }

    array[position] = value;

    for(int i = 0; i <= length; i++){
        printf("%d ", array[i]);
    }
}