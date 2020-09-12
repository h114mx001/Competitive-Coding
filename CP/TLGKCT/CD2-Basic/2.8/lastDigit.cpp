#include <bits/stdc++.h>
using namespace std;
int res[10] = {0};
long int base = 0;
long int power = 0;
long int modVal = 0;
long int numOfRes = 0;
long int tempRes = 1;
int main(){
    freopen("task.inp", "r", stdin);
    freopen("task.out", "w", stdout);
    cin >> base >> power >> numOfRes;
    modVal = pow(10, numOfRes);
    for (int i = 1; i <= power; i++){
        tempRes*=base;
        tempRes = tempRes%modVal;
    }
    int i = 0;
    while (tempRes != 0){
        res[numOfRes - i] = tempRes % 10;
        tempRes /= 10;
        i++;
    }
    for (int i = 1; i <= numOfRes; i++){
        cout << res[i];
    }

}