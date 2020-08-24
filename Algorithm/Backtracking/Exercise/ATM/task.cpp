#include <bits/stdc++.h>
using namespace std;
int arr[100];
int check[100];
int n, money;
bool had_answer;
void printResult(){
    int sum = 0;
    for (int i = 1; i <= n; i++){
        if (check[i] == 1){
            sum += arr[i];
        }
    }
    if (sum == money){
        for (int i = 1; i <= n; i++){
            if (check[i] == 1) cout << arr[i] << " ";
        }
        had_answer = true;
        cout << endl;
    }
   
}
void Attempt(int i){
    for (int j = 0; j <= 1; j++){
        check[i] = j;
        if (had_answer) break;
        if (i == n){
            printResult();
        }
        else Attempt(i+1);
    }
}
int main(){
    freopen("task.inp","r",stdin);
    freopen("task.out","w", stdout);
    cin >> n >> money;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    Attempt(1);
}