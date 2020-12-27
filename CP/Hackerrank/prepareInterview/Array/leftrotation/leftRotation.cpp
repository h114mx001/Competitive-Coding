#include <bits/stdc++.h>
using namespace std;
void IOInit(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("task.inp","r",stdin);
}
int main(){
    IOInit();
    int n;
    int k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int arrRes[n];
    for (int i = 0; i < n; i++){
        if (i+k>=n){
            arrRes[i] = arr[i+k-n]; 
        }
        else arrRes[i] = arr[i+k];
    }
    for (int i = 0; i < n; i++){
        cout << arrRes[i] << " ";
    }
}