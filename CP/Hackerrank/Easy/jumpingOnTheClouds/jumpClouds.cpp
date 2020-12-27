#include <bits/stdc++.h>
using namespace std;
void IOInit(){
    freopen("task.inp","r",stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
}
int main(){
    IOInit();
    int n;
    cin >> n;
    int map[n];
    for (int i = 0; i < n; i++){
        cin >> map[i];
    }
    int step = 0;
    int count = 0;
    while (count < n){
        if (count == n - 1){
            break;
        }
        else{
        if (map[count + 1] > map[count + 2]){
            count = count + 2;
        }
        else if (map[count + 1] < map[count + 2]){
            count = count + 1;
        }
        else count = count + 2;
        step++;
        }  
    }
    cout << step;
}