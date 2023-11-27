#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

int main(){
    //write your code here
    string s;
    getline(cin, s);

    stringstream ss(s);

    string word;
    int count = 0;
    while(ss >> word){
        for(int i = 0; i < word.size(); i++){
            if((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z')) count++;
            break;
        }
        // count++;
    }
    cout << count << nl;
    return 0;
}

// Solved but not gonna accepted in CodeForces
// Codeforces count two words if they are seperated by any charecter but with space.