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
    int n, k;
    cin >> n >> k;
    int blue, red = 0;
    for (int i = 1; i <= n; i++){
        if ((i % k) % 2 == 1){
            red++;
        }

    }
    cout << red;
}