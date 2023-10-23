#include<stdio.h>
#include<string.h>

int main() {
   int testcase;
   scanf("%d", &testcase);

   while(testcase--) {
    int m1, m2, d;
    scanf("%d %d %d", &m1, &m2, &d);

    int d2 = (d * m1) / (m1 + m2);
    printf("%d\n", d - d2);
   }
}