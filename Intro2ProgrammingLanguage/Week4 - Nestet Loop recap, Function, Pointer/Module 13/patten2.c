#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    int n = 5;
    // scanf("%d", &n);

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


//     for (int line = 1; line <= n; line++) {
//         int spaces = n - line;
//         int stars = 2 * line - 1;

//         for (int i = 1; i <= spaces; i++) {
//             printf(" ");
//         }
//         for (int i = 1; i <= stars; i++) {
//             printf("*");
//         }
//         printf("\n");
//   }

}