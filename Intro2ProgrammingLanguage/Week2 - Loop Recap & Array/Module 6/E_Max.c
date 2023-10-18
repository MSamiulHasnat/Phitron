#include <stdio.h>

int main(){
    //write your code here
    int n, q;
    scanf("%d", &n);

    int max = 0;
    for (int i = 0; i < n; i++){
        scanf("%d", &q);
        if(q > max) max = q;
    }
    printf("%d\n",max);
}