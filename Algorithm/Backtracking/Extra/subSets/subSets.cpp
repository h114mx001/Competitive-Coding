#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> subsets;
void search(int k){
    if (k == n){
        cout << "{";
        for (auto num : subsets){
            cout << num << " ";
        }
        cout << "}";
        cout << "\n";
    }
    else{
        search(k+1);
        subsets.push_back(k);
        search(k+1);
        subsets.pop_back();
    }
}
int main(){
    cin >> n;
    search(0);
}


// You may have 