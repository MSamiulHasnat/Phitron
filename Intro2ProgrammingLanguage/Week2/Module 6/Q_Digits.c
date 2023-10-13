#include <stdio.h>

int main(){
    //write your code here
    int TestCase;
    scanf("%d", &TestCase);

    for(int i = 0; i < TestCase; i++){
        int n;
        scanf("%d", &n);

        if(n == 0) printf("0 ");
        while(n > 0){
            printf("%d ", n%10);
            n /= 10;
        }
        printf("\n");
    }
}