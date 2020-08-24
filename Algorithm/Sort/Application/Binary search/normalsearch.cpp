#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("task.inp","r",stdin);
    int arr[100];
    int index;
    int n;
    cin >> n >> index;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] == index){
            cout << arr[i];
            break;
        }
    }
    
}