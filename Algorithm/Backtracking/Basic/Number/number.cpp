#include <bits/stdc++.h>
using namespace std;
int n;
int arr[100];
int sum[100];
void init(){
    arr[0] = 1;
    sum[0] = 0;
}
void printResult(int k){
    cout << n << " = ";
    for (int i = 1; i <= k - 1; i++){
        cout << arr[i] << " + ";
    }
    cout << arr[k] << endl;
}
void attempt(int i){
    for (int j = arr[i-1]; j <= (n - sum[i-1]) / 2; j++){
        arr[i] = j;
        sum[i] = sum[i - 1] + j;
        attempt(i+1);
    }
    arr[i] = n - sum[i-1];
    printResult(i);
}
int main(){
    init();
    cin >> n;     
    attempt(1);
}