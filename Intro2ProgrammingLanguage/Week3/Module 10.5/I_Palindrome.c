#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    char string[1001];
    scanf("%s", string);

    int count = 1;
    int stringSize = strlen(string);
    int i = 0, j = stringSize - 1;
    while(i < j){
        
        if(string[i] != string[j]) {
            count = 0;
            break;
        }
        i++; j--;
    }

    if(count > 0) printf("YES\n");
    else printf("NO\n");

}