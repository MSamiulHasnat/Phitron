#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

int main(){
    //write your code here
    string s;
    getline(cin, s);

    stringstream ssCount(s);
    string cnt;
    int count = 0;
    while (ssCount >> cnt){
        count++;
    }

    stringstream ss(s);

    string word;
    int count2 = 0;
    while(ss >> word){
        for(int i = word.size() - 1; i >= 0; i--){
            cout << word[i];
        }
        if(count2 == count - 1) break;;
        cout << " ";
        count2++;
    }

    return 0;
}