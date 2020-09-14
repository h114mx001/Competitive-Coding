#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "";
    cin >> s;
    unsigned long long int n = 0;
    cin >> n;
    unsigned long long int numOfA = 0;
    unsigned long long int result = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == 'a'){
            numOfA++;
        }
    }
    result = numOfA * (n / s.length());
    for (int i = 0; i < (n % s.length()); i++){ 
        if (s[i] == 'a'){
            result++;
        }
    }
    cout << result;
}