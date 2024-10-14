#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    int discount;
    scanf("%d", &discount);

    int priceAFDiscount;
    scanf("%d", &priceAFDiscount);

    float price = (float) 100 * priceAFDiscount / (100 - discount);
    printf("%.2lf", price);
}