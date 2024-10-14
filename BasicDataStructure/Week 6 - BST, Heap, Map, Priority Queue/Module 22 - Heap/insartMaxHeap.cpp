#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void insertHeap(vector<int> &v, int x){
    v.push_back(x);

    int cur_idx = v.size() - 1;
    while(cur_idx != 0){
        int parent_idx = (cur_idx - 1) / 2;
        if(v[parent_idx] < v[cur_idx] ) swap(v[parent_idx], v[cur_idx]);
        else break;

        cur_idx = parent_idx;
    }
}

void deleteHeap(vector<int> &v){
    v[0] = v[v.size() - 1];
    v.pop_back();

    int cur = 0;
    while(true){
        int left_idx = cur * 2 + 1;
        int right_idx = cur * 2 + 2;
        int last_idx = v.size() - 1;

        if(left_idx <= last_idx && right_idx <= last_idx){
            // contains both
            if(v[left_idx] >= v[right_idx] && v[right_idx] > v[cur]){
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else if(v[right_idx] >= v[left_idx] && v[right_idx] > v[cur]){
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else break;
        }
        else if(left_idx <= last_idx){
            //contains left only
            if(v[left_idx] > v[cur]){
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else break;
        }
        else if(right_idx <= last_idx){
            //contains right only
            if(v[right_idx] > v[cur]){
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else break;
        }
        else break;
    }
}

void printHeap(vector<int> v){
    for(int val : v) cout << val << " ";
    cout << nl;
}

int main(){
{  //this 4 lines are for input and output .text files
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
}
    int n;
    cin >> n;

    vector<int> v;
    while(n--){
        int x;
        cin >> x;
        insertHeap(v, x);
    }

    deleteHeap(v);

    printHeap(v);

    return 0;
}