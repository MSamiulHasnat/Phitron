#include <stdio.h>
#include <string.h>

int main(){
{
//this 4 lines are for input and output .text files
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
}
    //write your code here
    int row, col;
    scanf("%d %d", &row, &col);

    int a[row][col];

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 1;
    if(row != col) flag = 0;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(i + j == row - 1) continue;
            if(a[i][j] != 0) flag = 0;
        }
    }

    if(flag == 1) printf("this is a Secondary diagonal matrix\n");
    else printf("this is not a Secondary Diagonal Matrix\n");
}