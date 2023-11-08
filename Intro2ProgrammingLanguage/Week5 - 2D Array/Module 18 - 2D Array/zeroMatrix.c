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
    
    int count = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &a[i][j]);
            if(a[i][j] == 0) count++;
        }
    }

    if(count == row * col) printf("This is a ZERO matrix\n");
    else printf("This is NOT a ZERO Matrix\n");
}