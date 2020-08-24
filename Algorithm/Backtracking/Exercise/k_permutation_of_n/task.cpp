#include <bits/stdc++.h>
using namespace std;
int arr[100];
int n,k;
void printResult(){ 
    for (int i = 1; i <= k; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void Attempt(int i){
    for (int j = 1; j <= n; j++){
        arr[i] = j;
        if (i == k){
            printResult();
        }
        else Attempt(i+1);
    }
}
int main(){
    cin >> n >> k;
    Attempt(1);
}