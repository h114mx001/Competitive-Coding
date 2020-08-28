#include <bits/stdc++.h>
using namespace std;
int arr[10];
int plusMinus[10];
bool had = false;
string numberBase;
int target = 0;
void stringToArray(){
    for (int i = 0; i < numberBase.length(); i++){
        arr[i] = numberBase[i] - '0';
    }
}
void printResult(){
    for (int i = 0; i < numberBase.length(); i++){
        if (plusMinus[i] == 0){
            cout << "-" << arr[i];
        }
        else cout << "+" << arr[i];
    }
    cout << endl;
}
void checking(){
    int sum = 0;
    for (int i = 0; i < numberBase.length(); i++){
        if (plusMinus[i] == 0){
            sum -= arr[i];
        }
        else sum += arr[i];
    }
    if (sum == target) 
    {
        printResult();
        had = true;
    }
}
void Attempt(int i){
    for (int j = 0; j <= 1; j++){
        plusMinus[i] = j;
        if (i == numberBase.length() - 1){
            checking();
        }
        else Attempt(i+1);
    }
}
int main(){
    freopen("task.inp","r",stdin);
    cin >> target;
    cin >> numberBase;
    stringToArray();
    Attempt(0);
    if (had == false) cout << "-1";
}