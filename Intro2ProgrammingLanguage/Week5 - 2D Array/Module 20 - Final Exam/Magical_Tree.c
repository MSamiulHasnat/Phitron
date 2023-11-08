#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    int p;
    scanf("%d", &p);

    int n = 6;
    for(int i = 1; i < p; i++){
        if(i % 2 != 0) n++;
    }

    int starCount = 1;
    for(int line = 1; line <= n; line++){
        for(int space = 1; space <= n - line; space++){
            printf(" ");
        }
        for( int star = 1; star <= starCount; star++){
            printf("*");
        }
        printf("\n");
        starCount += 2;
    }

    for(int line = 1; line <= 5; line++){
        for(int space = 1; space < n - ((p - 1) / 2); space++){
            printf(" ");
        }
        for(int star = 1; star <= p; star++){
            printf("*");
        }
        printf("\n");
    }
}