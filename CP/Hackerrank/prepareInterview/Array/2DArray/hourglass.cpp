#include <bits/stdc++.h>
using namespace std;
void IOInit(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("task.inp","r",stdin);
}
int main(){
    IOInit();
    int arr[7][7];
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            cin >> arr[i][j];
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    int max = -99;
    int number = 0;
    for (int i = 1; i <= 4; i++){
        for (int j = 1; j <= 4; j++){
            int number = arr[i-1][j-1] + arr[i-1][j] + arr[i-1][j+1] + arr[i][j] + arr[i+1][j-1] + arr[i+1][j] + arr[i+1][j+1];
            if (number > max){
                max = number;
            }
        }
    }
    cout << max;
}