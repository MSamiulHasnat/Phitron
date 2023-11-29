#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str;
    while (getline(cin, str)) {
        sort(str.begin(), str.end());

        for(int i =0; i<str.size(); i++){
            if(str[i]!=' ')cout<<str[i];
        }
        cout<<'\n';
    }
    return 0;
}