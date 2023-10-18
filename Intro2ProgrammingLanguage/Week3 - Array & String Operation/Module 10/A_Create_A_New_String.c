#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    char str1[1001], str2[1001];
    scanf("%s %s", str1, str2);

    int sz1 = strlen(str1), sz2 = strlen(str2);
    printf("%d %d\n", sz1, sz2);
    printf("%s %s\n", str1, str2);
}