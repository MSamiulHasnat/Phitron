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
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
//taking input
    for(int row = 0; row < r; row++){
        for(int col = 0; col < c; col++){
            scanf("%d", &a[row][col]);
        }
    }
//printing exact marix
    printf("Printing exact matrix\n");

    for(int row = 0; row < r; row++){
        for(int col = 0; col < c; col++){
            printf("%d ", a[row][col]);
        }
        printf("\n");
    }
    printf("\n");

//priting specific coloumn
    printf("Printing coloumn : \n");

    int x;
    scanf("%d", &x);

    for(int i = 0; i < r; i++){
        printf("%d\n", a[i][x]);
    }
}

