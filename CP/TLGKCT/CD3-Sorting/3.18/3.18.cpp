#include <bits/stdc++.h>
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
    cin >> n;
    int arr1[n];
    int arr2[n];
    for (int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++){
        cin >> arr2[i];
    }
    sort(arr1, arr1+n);
    sort(arr2, arr2+n);
    if (abs(arr1[0] + arr2[0]) < abs(arr1[n-1] + arr2[n-1])){
        cout << arr1[0] + arr2[0];
    }
    else cout << arr1[n-1] + arr2[n-1];
}