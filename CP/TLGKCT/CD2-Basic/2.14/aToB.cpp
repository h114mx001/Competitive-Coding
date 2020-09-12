#include <bits/stdc++.h>
using namespace std;
int a, b = 0;
string base16 = "0123456789ABCDEF";
int aToDec(string binNum){
    string rev = string(binNum.rbegin(),binNum.rend());
    int digit = 0;
    int decNum = 0;
    for (int i = 0; i < rev.length(); i++){
        digit = rev[i] - '0';
        decNum += digit*pow(a,i);
    }
    return decNum;
}
string decToB(int decNum){
    string answer = "";
    int remainder = 0;
    while (decNum != 0){
        remainder = decNum % b;
        answer += base16[remainder];
        decNum/=b;
    }
    answer = string(answer.rbegin(), answer.rend());
    string base = to_string(b);
    return answer + "(" + base + ")";
}
int main(){
    string aNum = "";
    cin >> aNum;
    cout << "From: ";
    cin >> a;
    cout << "To: ";
    cin >> b;
    cout << aNum << "(" << a << ")  =>  " << decToB(aToDec(aNum));
}