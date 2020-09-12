#include <bits/stdc++.h>
using namespace std;
string base16 = "0123456789ABCDEF"; 
int binToDec(string binNum){
    string rev = string(binNum.rbegin(),binNum.rend());
    int digit = 0;
    int decNum = 0;
    for (int i = 0; i < rev.length(); i++){
        digit = rev[i] - '0';
        decNum += digit*pow(2,i);
    }
    return decNum;
}
string decToHex(int decNum){
    string answer = "";
    int remainder = 0;
    while (decNum != 0){
        remainder = decNum % 16;
        answer += base16[remainder];
        decNum/=16;
    }
    answer = string(answer.rbegin(), answer.rend());
    return answer + "(16)";
}
int main(){
    string binNum;
    cin >> binNum;
    cout << decToHex(binToDec(binNum));
}