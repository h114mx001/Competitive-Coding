#include <bits/stdc++.h>
using namespace std;
int arr[100];
int n,l;
bool printable = true;
bool isPrintable(int j){
    for (int i = j-2*l+1; i <= j - l; i++){
        if (arr[i] != arr[i+l]){
            return true;
        }
    }
    return false;
}
void printResult(){
    printable = true;
    for (int i = 2*l; i <= n; i++){
        if (printable) printable = isPrintable(i);
    }
    if (printable){
    for (int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    }
}
void Attempt(int i){
    for (int j = 0; j <= 1; j++){
        arr[i] = j;
        if (i == n){
            printResult();
        }
        else Attempt(i+1);
    }
}
int main(){
    cin >> n >> l;
    Attempt(1);
}