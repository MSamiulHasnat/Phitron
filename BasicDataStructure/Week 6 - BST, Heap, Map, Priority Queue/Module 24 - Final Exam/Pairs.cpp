#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

class Pair{
public:
    string name;
    int id;
    Pair(string name, int id){
        this->name = name;
        this->id = id;
    }
};

class cmp{
public:
    bool operator()(Pair a, Pair b){
        if (a.name > b.name) return true;
        else if (a.name < b.name) return false;
        else{
            if (a.id < b.id) return true;
            else return false;
        }
    }
};

int main(){
    int n;
    cin >> n;
    priority_queue<Pair, vector<Pair>, cmp> pq;

    for (int i = 0; i < n; i++){
        string name;
        int id;
        cin >> name >> id;
        Pair obj(name, id);
        pq.push(obj);
    }

    while (!pq.empty()){
        cout << pq.top().name << " " << pq.top().id << endl;
        pq.pop();
    }

    return 0;
}