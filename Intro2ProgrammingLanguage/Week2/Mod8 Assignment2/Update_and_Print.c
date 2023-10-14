#include <stdio.h>

int main(){
    //write your code here
    int n;
    scanf("%d", &n);

    int array[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    
    int x, v;
    scanf("%d %d ", &x, &v);
    
    array[x] = v;

    for(int i = n-1; i >= 0; i--){
        printf("%d ", array[i]);
    }
}
