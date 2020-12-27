#include <bits/stdc++.h>
using namespace std;
void IOInit(){
    freopen("task.inp","r",stdin);
}
int calculate(int a, int b){
    return max(0, a-b);
}
int main(){
    ios::sync_with_stdio(0);    
    cin.tie(0);
    IOInit();
    int surfaceArea = 0;
    int map[102][102] = {0};
    int m, n; 
    cin >> m >> n;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            cin >> map[i][j];
        }
    }
    surfaceArea = 2*m*n;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            surfaceArea += calculate(map[i][j],map[i-1][j]);
            surfaceArea += calculate(map[i][j],map[i+1][j]);
            surfaceArea += calculate(map[i][j],map[i][j-1]);
            surfaceArea += calculate(map[i][j],map[i][j+1]);
        }
    }
    cout << surfaceArea << "\n";
}