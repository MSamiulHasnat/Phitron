#include <stdio.h>

int main(){
    //write your code here
    long long int eye, mouth, body;
    scanf("%lld %lld %lld", &eye, &mouth, &body);

    long long int min;
    if(eye < mouth && eye < body) min = eye;
    else if(mouth < eye && mouth < body) min = mouth;
    else min = body;

    long long int katryoshka = min;

    eye -= min; // eye = eye - min;
    mouth -= min;
    body -= min;

/*    
    if(body >= eye / 2 ){
    katryoshka += eye/2;
    } 

    if(body * 2 <= eye){
       katryoshka += body;
    }
*/    

    eye = eye / 2;

    if(eye < body) katryoshka = katryoshka + eye;
    else katryoshka = katryoshka + body;


    printf("%lld\n", katryoshka);
}