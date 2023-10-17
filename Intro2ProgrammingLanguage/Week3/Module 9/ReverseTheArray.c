#include <stdio.h>

int main(){
    //write your code here
    int length;
    scanf("%d", &length);

    int array[length];
    for(int i = 0; i < length; i++) scanf("%d", &array[i]);

    int i = 0, j = length - 1;
    while(i < j){
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;

        i++;
        j--;
    }

    for(int i = 0; i < length; i++) printf("%d ", array[i]);
}