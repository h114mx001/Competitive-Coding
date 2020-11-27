#include <bits/stdc++.h>
using namespace std;
void IOInit(){
    freopen("task.inp","r",stdin);
    freopen("task.out","w",stdout);
}
int main(){
    IOInit();
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    int number;
    int sum = 0;
    int a[k] = {0};
    for (int i = 0; i < n; i++){
        cin >> number;
        a[number % k]++;
    }
    sum = n;
    if (a[0] != 0){
        sum -= (a[0] - 1);
    }
    for (int i = 1; i <= ceil(k/2); i++){
        if (k - i == i){
            if (a[i] >= 2) sum = sum - a[i] + 1;
        } 
        else {
            if (a[i] >= a[k - i]){
                sum-=a[k - i];
                a[k-i] = 0;
            }
            else if (a[i] <= a[k-i]){
                sum-=a[i]; 
                a[i] = 0; 
            } 
        }
    }
    cout << sum;
}
