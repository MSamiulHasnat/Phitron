#include <stdio.h>

int main(){
    //write your code here
    char n;
    scanf("%c", &n);

    if(n == 122) printf("%c\n",97);
    else printf("%c\n", (int)++n);
}