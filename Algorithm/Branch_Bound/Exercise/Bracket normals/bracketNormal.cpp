#include <bits/stdc++.h>
using namespace std;
int arr[100];
int n;
string brackets = "()";
bool checkValid(int j){
    int sum = 0;
    for (int i = 1; i <= j; i++){
        if (arr[i] == 0){
            ++sum;
        } else --sum;
        if (sum < 0) return false;
    } 
    if (j < n){
        return true;
    }
    else if (sum == 0) return true; else return false;
}
void printResult(){
    for (int i = 1; i <= n; i++){
        cout << brackets[arr[i]];
    }
    cout << endl;
}
void Attempt(int i){
    for (int j = 0; j <= 1; j++){
        arr[i] = j;
        if (checkValid(i)){
            if (i == n) printResult();
            else Attempt(i+1);
        }
    }
}
int main(){
    freopen("task.inp","r",stdin);
    freopen("task.out","w",stdout);
    cin >> n;
    n*=2;
    Attempt(1);
}