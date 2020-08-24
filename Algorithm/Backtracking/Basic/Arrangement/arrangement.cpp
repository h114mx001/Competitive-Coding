#include <bits/stdc++.h>
using namespace std;
int arr[100];
bool check[100];
int n, k;
void init(){
    for (int i = 1; i <= n; i++){
        check[i] = true;
    }
}
void printResult(){
    for (int i = 1; i <= k; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void Attempt(int i){
    for (int j = 1; j <= n; j++){
        if (check[j]){
            arr[i] = j;
            if (i == k) printResult();
            else
            {
                check[j] = false;
                Attempt(i+1);
                check[j] = true;
            }
        }
    }
}
int main(){
    cin >> n >> k;
    init();
    Attempt(1);
}