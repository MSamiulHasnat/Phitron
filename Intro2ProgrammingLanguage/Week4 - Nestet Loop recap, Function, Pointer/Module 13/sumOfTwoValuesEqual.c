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

    int sum;
    scanf("%d", &sum);

    int flag = 0;
    for(int i = 0; i < length - 1; i++){
        for(int j = i + 1; j < length; j++){
            if(i + j == sum){
                flag = 1;
            }
        }
    }

    if(flag == 1) printf("Yes\n");
    else printf("No\n");
}