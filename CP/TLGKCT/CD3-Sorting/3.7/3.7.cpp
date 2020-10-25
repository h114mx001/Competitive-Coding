#include <bits/stdc++.h>
using namespace std;   
void IOInit(){
    freopen("task.inp","r",stdin);
    freopen("task.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
}
int main(){
    vector <int> res;
    int arr1[100];
    int arr2[100];
    IOInit();
    int m, n;    
    cin >> m >> n;
    
    for (int i = 0; i < m; i++){
        cin >> arr1[i];

    }
    for (int i = 0; i < n; i++){
        cin >> arr2[i];

    }
    int i = 0, j = 0;
    while (i + j < m + n){
    if (arr1[i] < arr2[j]){
        res.push_back(arr1[i]);
        i++;
        if (i == m) arr1[i] = 9999999;
    }
    
    if (arr1[i] >= arr2[j]){
        res.push_back(arr2[j]);
        j++;
        if (j == n) arr2[j] = 9999999;
    }

    }
    for (int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
}