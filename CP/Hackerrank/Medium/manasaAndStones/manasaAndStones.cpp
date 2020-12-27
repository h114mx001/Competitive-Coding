#include <bits/stdc++.h>
using namespace std;
void IOInit(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("task.inp","r",stdin);
}
void returnAnswer(int n, int a, int b){
    if (a == b){
        cout << (n-1)*a;
    }
    else{
        if (a > b) swap(a,b);
        vector <int> answer;
        answer.push_back((n - 1)*a);
        cout << answer[0] << " ";
        for (int i = 1; i <= n - 1; i++){
            answer.push_back(answer[i-1] - a + b);
            cout << answer[i] << " ";
        }
    }
    
    cout << "\n";
}
int main(){
    IOInit();
    int t;
    cin >> t;
    int n, x, y;
    for (int i = 1; i <= t; i++){
        cin >> n >> x >> y;
        returnAnswer(n,x,y);
    }
}