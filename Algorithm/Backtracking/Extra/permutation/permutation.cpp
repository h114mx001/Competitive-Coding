#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> permutation;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        permutation.push_back(i);
    }
    do{
        for (int i = 0; i < permutation.size(); i++){
            cout << permutation[i] << " ";
        }
        cout << "\n";
    } while(next_permutation(permutation.begin(), permutation.end()));
}