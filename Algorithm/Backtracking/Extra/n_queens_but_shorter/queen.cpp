#include <bits/stdc++.h>
using namespace std;
int n;
int numRes = 0;
vector <int> resMap;
int column[20],diag1[20],diag2[20];
void search(int y){
    if (y == n){
        numRes++;
        cout << numRes << ". ";
        for (auto res : resMap){
            cout << res << " ";
        }
        cout << "\n";
        return;
    }
    for (int x = 0; x < n; x++){
        if (column[x] || diag1[x+y] || diag2[x-y+n-1]) {continue;}
        resMap.push_back(x+1);
        column[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
        search(y+1);
        resMap.pop_back();
        column[x] = diag1[x+y] = diag2[x-y+n-1] = 0;
    }
}
int main(){
    cin >> n;
    search(0);
}