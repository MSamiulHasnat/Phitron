#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    int tc;
    scanf("%d", &tc);

    while(tc--){
        int n;
        scanf("%d", &n);

        char a[n];
        for(int i = 0; i <= n; i++){
            scanf("%c", &a[i]);
        }

        int tCount = 0, pCount= 0;
        for(int i = 0; i <= n; i++){
            if(a[i] == 'T') tCount++;
            if(a[i] == 'P') pCount++;
        }

        if(tCount > pCount) printf("Tiger\n");
        else if(pCount > tCount) printf("Pathaan\n");
        else printf("Draw\n");

    }
}