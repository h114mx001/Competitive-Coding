#include <bits/stdc++.h>
using namespace std;
//addBigNum
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
//subBigNum
string subBigNum(string a, string b){
    int borrow, sum = 0;
    string c = "";
    while (a.length() < b.length()) a = '0' + a;
    while (a.length() > b.length()) b = '0' + b;
    for (int i = a.length() - 1; i>=0; i--){
        sum = a[i] - b[i] - borrow;
        if (sum < 0){
            sum+=10;
            borrow = 1;
        } else borrow = 0;
        sum = sum + '0';
        c = char(sum) + c; 
    }
    while (c.length() > 1 && c[0] == '0'){
        c.erase(0,1);
    } 
    return c;
}

string multiBigvsSmall (string a, long int b){
    string tmp,c = "";
    int carry,sum = 0;
    for (int i = a.length()-1; i >= 0; i--){
        sum = (a[i] - '0')*b + carry;
        carry = sum/10;
        sum = sum%10 + '0';
        c = char(sum) + c;
    }
    if (carry > 0) tmp = to_string(carry); else tmp = "";
    c = tmp + c;
    return c;
}
string multiplyBigvsBig (string a, string b){
    string sum, tmp = "";
    int m = -1;
    
}