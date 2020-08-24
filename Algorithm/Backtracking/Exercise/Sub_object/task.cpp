#include <bits/stdc++.h>
using namespace std;
int arr[100];
int number[100];
int n,k;
void printResult(){
    for (int i = 1; i <= k; i++){
        cout << number[arr[i]] << " ";
    }
    cout << endl;

}
void Attempt(int i){
    for (int j = arr[i - 1] + 1; j <= n; j++){
        arr[i] = j;
        if (i == k){
            printResult();
        }
        else Attempt(i+1);
    }
}
int main(){
    freopen("task.inp","r",stdin);
    freopen("task.out","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> number[i];
    }
    for (int j = 1; j <= n; j++){
        k = j;
        Attempt(1);
    }
}