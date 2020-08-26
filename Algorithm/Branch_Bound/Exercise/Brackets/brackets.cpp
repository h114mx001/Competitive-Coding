#include <bits/stdc++.h>
using namespace std;
int arr[100];
int n;
int level;
string brackets = "()";
void printResult(){
    for (int i = 1; i <= n; i++){
        cout << brackets[arr[i]];
    }
    cout << endl;
}
bool checkValid(){
    int sum;
    for (int i = 1; i <= n; i++){
        if (arr[i] == 0){
            ++sum;
        } else --sum;
        if (sum < 0) return false;
    } 
    if (sum == 0) return true; else return false;
}
int checkLevel(int j){
    int level = 1; 
    for (int i = 1; i <= j - 1; i++){
        if (arr[i] == arr[i + 1]){
            ++level;
        }
        else level = 1;
    }
    return level;
}
void Attempt(int i){
    for (int j = 0; j <= 1; j++){
        arr[i] = j;
        if (checkLevel(i) <= level){
            if (i == n - 1 && checkValid()){
                printResult();
            }
            else Attempt(i+1);
        }
    }
}
int main(){
    freopen("task.out","w",stdout);
    arr[1] = 0;
    cin >> n >> level;
    arr[n] = 1;
    Attempt(2);
}