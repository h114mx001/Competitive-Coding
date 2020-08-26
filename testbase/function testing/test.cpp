#include <bits/stdc++.h>
using namespace std;
int arr[100];
int j;
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
bool checkValid(){
    int sum;
    for (int i = 1; i <= j; i++){
        if (arr[i] == 0){
            ++sum;
        } else --sum;
        if (sum < 0) return false;
    } 
    if (sum == 0) return true; else return false;
}
int main(){
    cin >> j;
    for (int i = 1; i <= j; i++){
        cin >> arr[i];
    }
    cout << checkLevel(j);
    if (checkValid()){
        cout << "Valid!";
    }
    else cout << "Invalid";
}