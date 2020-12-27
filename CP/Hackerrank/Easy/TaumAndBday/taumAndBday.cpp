#include <bits/stdc++.h>
using namespace std;
void IOInit(){
    freopen("task.inp","r",stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
}

int main(){
    IOInit();
    int t; 
    cin >> t;
    for (int i = 1; i <= t; i++){
        long b, w, bc, wc, z = 0;
        cin >> b >> w;
        cin >> bc >> wc >> z;
        if (wc + z < bc){
            bc = wc + z;
        }
        if (bc + z < wc){
            wc = bc + z;
        }
        long cost;
        cost = bc*b + wc*w;
        cout << cost << "\n";
    }
}