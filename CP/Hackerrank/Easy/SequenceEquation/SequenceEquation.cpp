#include <bits/stdc++.h>
using namespace std;
int n; 
int arr[51];
bool checked[51];
void read(){
    freopen("task.inp","r",stdin);
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }
}
int returnResult(int target){
    int result = 0;
    for (int i = 1; i <= n; i++){
        if (arr[i] == target){
            for (int j = 1; j <= n; j++){
                if (i == arr[j]){
                    result = j;  
                    break; 
                }
            }
            break;
        }
    }
    return result;
}
int main(){
    read();
    for (int i = 1; i <= n; i++){
        cout << returnResult(i) << endl;
    }
}