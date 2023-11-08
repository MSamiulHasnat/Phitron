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

    int flag = 0;
    if(n != m) printf("NO\n");
    else {
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                // diagonal Check
                if(i == j && a[i][j] != 1){
                    flag = 1;
                }
                // rest of any diagonal check
                if(i != j && a[i][j] != 0 && i + j != m - 1){
                    flag = 1;
                }
                // Seconadary Diagonal Check
                if(i + j == m - 1 && a[i][j] != 1){
                    flag = 1;
                }
            }
        }

        if(flag == 0) printf("YES\n");
        else printf("NO\n");
    }
}
//Not solved yet