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
    int listNum[10000];
    int n; 
    cin >> n;
 
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        listNum[i] = x;
    }
    sort(listNum, listNum + n - 1);
    if (n & 1){
        cout << listNum[n/2 + 1];
    }
    else{
        for (int i = listNum[((n-1)/2)]; i <= listNum[((n-1)/2+1)]; i++){
            cout << i << " ";
        }
    }
}