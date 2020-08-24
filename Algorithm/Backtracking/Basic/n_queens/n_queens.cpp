#include <bits/stdc++.h>
using namespace std;
int arr[100];
int column[200];
int EN_WS[200];
int ES_WN[200];
int n;
void init(){
    for (int i = 1; i <= n; i++){
        column[i] = true;
    }
    for (int i = 2; i <= 2*n; i++){
        EN_WS[i] = true;
    }
    for (int i = 1 - n + n - 1; i <= n - 1 + n - 1; i++){
        ES_WN[i] = true;
    }
}
void printResult(){
    for (int i = 1; i<=n; i++){
        cout << "(" << i << "," << arr[i] << "); ";
    }
    cout << endl;
}
void Attempt(int i){
    for (int j = 1; j <= n; j++){
        if (column[j] && EN_WS[i + j] && ES_WN[i - j + n - 1]){
            arr[i] = j;
            if (i == n) printResult();
            else{
                column[j] = false; EN_WS[i + j] = false; ES_WN[i - j + n - 1] = false;
                Attempt(i+1);
                column[j] = true; EN_WS[i + j] = true; ES_WN[i - j + n - 1] = true;
            }
        }
    }
}
int main(){
    cin >> n;
    init();
    Attempt(1);
}