#include <bits/stdc++.h>
using namespace std;
void IOInit(){
    freopen("task.inp","r",stdin);
    freopen("task.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
}
string base16 = "0123456789ABCDEF";
int aToDec(string binNum, int a){
    string rev = string(binNum.rbegin(),binNum.rend());
    int digit = 0;
    int decNum = 0;
    for (int i = 0; i < rev.length(); i++){
        digit = rev[i] - '0';
        decNum += digit*pow(a,i);
    }
    return decNum;
}
string decToB(int decNum, int b){
    string answer = "";
    int remainder = 0;
    while (decNum != 0){
        remainder = decNum % b;
        answer += base16[remainder];
        decNum/=b;
    }
    answer = string(answer.rbegin(), answer.rend());
    return answer + "(" + to_string(b) + ")";
} 
int main(){
    IOInit();
    int a, b;
    cin >> a >> b;
    string num;
    cin >> num;
    cout << decToB(aToDec(num,a),b);
}