#include <bits/stdc++.h>
using namespace std;
int arr[100];
int n;
int depth;
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
bool checkLevel(int j){
    int max, level = 1;
    max = 0;
    for (int i = 2; i <= j; i++){
        if (arr[i] == arr[i-1]){
            ++level;
            if (level > max) max = level;
        }
        else level = 1;
    }
    if (j < n)
    {
        if (max <= depth) return true; else return false;
    }
    else{
        if (max == depth) return true; else return false;
    }
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
        if (checkValid(i) && checkLevel(i)){
            if (i == n) printResult();
            else Attempt(i+1);
        }
    }
}
int main(){
    freopen("task.inp","r",stdin);
    freopen("task.out","w",stdout);
    cin >> n >> depth;
    Attempt(1);
}