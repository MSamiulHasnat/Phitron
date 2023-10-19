#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    char string1[100], string2[100]; //No Condition, I decide the length of string as 100
    scanf("%s %s", string1, string2);

    for(int i = 0; ; i++){
        if(string1[i] == '\0' && string2[i] == '\0'){
            printf("This strings are lexographically equal\n");
            break;
        }
        else if(string1[i] == '\0'){
            printf("%s is smaller", string1);
            break;
        }
        else if(string2[i] == '\0'){
            printf("%s is smaller", string2);
            break;
        }
        else {
            if(string1[i] > string2[i]){
                printf("%s is bigger\n", string1);
                break;
            }
            else if(string1[i] < string2[i]){
                printf("%s is bigger", string2);
                break;
            }
        }
    }
}