#include <bits/stdc++.h>
using namespace std;
int arr[100];
int n,l;
bool printable = true;
bool isPrintable(int j){
    for (int i = j-2*l+1; i <= j - l; i++){
        if (arr[i] != arr[i+l]){
            return true;
        }
    }
    return false;
}
int main(){
    cin >> n >> l;
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
        if (printable == true && i / l >= 2){
            printable = isPrintable(i);
            if (printable){
                cout << "Yes";
            }
            else cout << "No";
        }
    }
}