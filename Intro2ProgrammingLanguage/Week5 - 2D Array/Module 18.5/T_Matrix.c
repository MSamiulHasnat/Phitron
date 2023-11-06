#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    //write your code here
    int n;
    scanf("%d", &n);

    int array[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &array[i][j]);
        }
    }

    //Primary diagonal
    int pdSum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) pdSum += array[i][j];
        }
    }

    //Secondary Diagonal
    int sdSum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i + j == n - 1) sdSum += array[i][j];
        }
    }

    //Absolute difference
    int res;
    if(pdSum > sdSum) res = pdSum - sdSum;
    else if(sdSum > pdSum) res = sdSum - pdSum;
    else res = 0;
    
    printf("%d\n", abs(res));
}