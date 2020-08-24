#include <bits/stdc++.h>
using namespace std;
int main(){
    int checkList[100] = {0};
    int n;
    int x;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        checkList[x]++;
    }
    for (int i = 0; i < 100; i++){
        if (checkList[i] ==0){
            cout << i;
            break;
        }
    }
}   