#include <bits/stdc++.h>
using namespace std;
bool prettyNumber(int n){
    if (n < 0) return false;
    int remainder = 0;
    int sum = 0;
    int numDigits = 0;
    while (n/10 != 0){
        remainder = n % 10;
        numDigits++;
        sum += remainder;
        n/=10;
    }
    sum = sum + n - numDigits - 1;
    cout << sum;
    if (sum % 9 == 0) return true; else return false;
}
int main(){
    int n = 1238902;
    if (prettyNumber(n)){
        cout << "Yes";
    }
    else cout << "No";
}