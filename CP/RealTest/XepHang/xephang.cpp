#include <bits/stdc++.h>
using namespace std;
int arr[100];
int n;
void printResult(){
    for (int i = 1; i <= n; i++){
        cout << arr[i];
    }
    cout << endl;
}
void Attempt(int i){
    for (int j = 0; j <= abs(arr[i-1] - 1); j++){
        arr[i] = j;
        if (i == n){
            printResult();
        }            
        else Attempt(i+1);
    }
}
int main(){
    freopen("xephang.inp","r",stdin);
    freopen("xephang.out","w",stdout);
    cin >> n;
    int index_1 = 1; 
    int index_2 = 1;
    int last = 2;
    if (n != 1)
    {
        for (int i = 1; i <= n; i++){
            last = index_1 + index_2;
            index_1 = index_2;
            index_2 = last;
        }
    } 
    cout << last << endl;
    Attempt(1);
}