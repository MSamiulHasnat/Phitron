#include <stdio.h>

int main(){
    //write your code here
    int length;
    scanf("%d", &length);

    int array[length];
    for(int i = 0; i < length; i++){
        scanf("%d", &array[i]);
    }

    int min = array[0], count = 0;
    for(int i = 0; i < length; i++){
        if(array[i] < min){
            min = array[i];
            count = i;
        }
    }
    printf("%d %d\n", min, count+1);
}