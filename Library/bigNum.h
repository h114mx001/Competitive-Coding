#include <bits/stdc++.h>
using namespace std;
string addBigNum(string a, string b){
    int sum, carry = 0;
    string c = "";
    int digit;
    while (a.length() < b.length()) a = '0' + a;
    while (a.length() > b.length()) b = '0' + b;
    for (int i = a.length() - 1; i >= 0; i--){
        sum = a[i] - '0' + b[i] - '0' + carry;
        carry = sum / 10;
        digit = sum % 10 + '0';
        c = char(digit) + c;
    }
    if (carry > 0) c = '1' + c;
    return c;
}
