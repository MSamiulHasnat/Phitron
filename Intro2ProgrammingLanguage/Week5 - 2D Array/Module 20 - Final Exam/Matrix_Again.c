#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }

    //printing last row
    for(int j = 0; j < m; j++){
        printf("%d ", a[n-1][j]);
    }
    printf("\n");

    //printing last coloumn
    for(int i = 0; i < n; i++){
        printf("%d ", a[i][m-1]);
    }
    printf("\n");
}