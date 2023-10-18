#include <iostream>

using namespace std;
//#define "\n" = nl;

int main(){
    //write your code here
    int count = 0;
    for(int i = 1; i <= 1000; i++){
        if(i % 7 == 0 || i % 11 == 0) count++;
    }
    cout << count << endl;;
return 0;
}