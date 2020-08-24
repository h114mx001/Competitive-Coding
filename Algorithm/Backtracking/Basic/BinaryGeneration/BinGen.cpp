#include <bits/stdc++.h>
using namespace std;
int binArr[100];
int n;
int sum = 0;
void printResult(){
    for (int i = 0; i < n; i++){
        cout << binArr[i] << " ";
    }
    cout << endl;
}
void Attempt(int i){
    for (int j = 0; j <= 1; j++){
        binArr[i] = j;
        if (i == n - 1){
            for (int x = 0; x < n; x++){
                sum +=binArr[x]; 
            }                  
            if (sum == 2) {
                printResult();
            }
            else cout << sum << endl;
            sum = 0;
        }
        else Attempt(i+1);
    }
}
int main(){
    freopen("task.out","w",stdout);
    cin >> n;
    Attempt(0);
}