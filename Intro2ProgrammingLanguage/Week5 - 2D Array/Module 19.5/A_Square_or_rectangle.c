#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    int tc;
    scanf("%d", &tc);
    while(tc--) {
    int w, t;
    scanf("%d %d", &w, &t);

    if(w == t) printf("Square\n");
    else printf("Rectangle\n");
    
    }
}