#include <bits/stdc++.h>
using namespace std;
int arr[100];
int n, k;
void printResult(){
    for (int i = 1; i <= k; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void Attempt(int i){
    for (int j = arr[i - 1] + 1; j <= n - k + i; j++){
        arr[i] = j;
        if (i == k){
            printResult();
        }
        else Attempt(i+1);
    }
}
int main(){
    arr[0] = 0;
    cin >> n >> k;
    Attempt(1);
}