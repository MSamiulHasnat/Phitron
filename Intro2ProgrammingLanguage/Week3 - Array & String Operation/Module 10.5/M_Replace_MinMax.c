#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    int length;
    scanf("%d", &length);

    int array[length];
    for(int i = 0; i < length; i++) scanf("%d", &array[i]);

    int maximum = array[0], minimum = array[0];
    int maxIndex, minIndex;
    for(int i = 1; i < length; i++){
        if(array[i] > maximum){ 
            maximum = array[i];
            maxIndex = i;
        }
        if(array[i] < minimum){ 
            minimum = array[i];
            minIndex = i;
        }
    }

    int temp = array[maxIndex];
    array[maxIndex] = array[minIndex];
    array[minIndex] = temp;

    for(int i = 0; i < length; i++) printf("%d ", array[i]);
}