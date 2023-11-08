#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    //write your code here
    int tc;
    scanf("%d", &tc);
    while(tc--){
        int n;
        scanf("%d", &n);

        int a[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }

        int b[n];
        for(int i = 0; i < n; i++){
            b[i] = a[i];
        }

        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(b[i] > b[j]){
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        int c[n];
        for(int i = 0; i < n; i++){
            c[i] =  abs(a[i] - b[i]);
        }

        for(int i = 0; i < n; i++){
            printf("%d ", c[i]);
        }
        printf("\n");

    }
}