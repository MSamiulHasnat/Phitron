#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c], b[r][c], sum[r][c];
    //taking input of a[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    //taking input of b[r][c]
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &b[i][j]);
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

//SOLVED IN WRONG APPROCH