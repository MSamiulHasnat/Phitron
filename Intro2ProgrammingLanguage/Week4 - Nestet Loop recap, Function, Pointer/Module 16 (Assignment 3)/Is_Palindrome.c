#include <stdio.h>
#include <string.h>

long long int is_palindrome(char string[]){
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
    return count;
}

int main(){
    //write your code here
    char s[1001];
    scanf("%s", s);

    int flag = is_palindrome(s);

    if(flag > 0) printf("Palindrome\n");
    else printf("Not Palindrome\n");
}