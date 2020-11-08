#include <bits/stdc++.h>
#include "/home/soyo20/Desktop/Competitive-Coding/Library/bigNum.h"
using namespace std;
void IOInit(){
    freopen("task.inp","r",stdin);
    freopen("task.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
}
int main(){
    IOInit();
    int n;
    int x;
    cin >> n;
    int map[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cin >> map[i][j];
        }
    }
    for (int i = n - 2; i >= 0; i--){
        for (int j = 0; j <= i; j++){
            int f1 = map[i][j] * map[i+1][j];
            int f2 = map[i][j] * map[i+1][j+1];
            map[i][j] = max(f1,f2);
        }
    }

    cout << map[0][0];
}