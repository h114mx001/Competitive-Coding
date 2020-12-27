#include <bits/stdc++.h>
using namespace std;
void printTheMatrix(int n){
    vector<vector<int>> result(n, vector<int>(n)); //declare a n x n vector
    int cnt = 1;
        for (int layer = 0; layer < (n + 1) / 2; layer++) {
            // direction 1 - traverse from left to right
            for (int ptr = layer; ptr < n - layer; ptr++) {
                result[layer][ptr] = cnt++;
            }
            // direction 2 - traverse from top to bottom
            for (int ptr = layer + 1; ptr < n - layer; ptr++) {
                result[ptr][n - layer - 1] = cnt++;
            }
            // direction 3 - traverse from right to left
            for (int ptr = n - layer - 2; ptr >= layer; ptr--) {
                result[n - layer - 1][ptr] = cnt++;
            }
            // direction 4 - traverse from bottom to top
            for (int ptr = n - layer - 2; ptr > layer; ptr--) {
                result[ptr][layer] = cnt++;
            }
        }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    printTheMatrix(4);
}