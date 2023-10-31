#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    int n;
    scanf("%d", &n);

    int starCount = 1;
    int spaceCount = n - 1;
    for(int line = 1; line <= n * 2 - 1; line++){
        for(int space = 1; space <= spaceCount; space++){
            printf(" ");
        }

        for(int star = 1; star <= starCount; star++){
            if(line % 2 == 0){
                printf("-");
            }
            else printf("#");
        }

        printf("\n");

        if(line <= n - 1){
            starCount += 2;
            spaceCount--;
        }
        else{
            starCount -= 2;
            spaceCount++;
        }
    }
}