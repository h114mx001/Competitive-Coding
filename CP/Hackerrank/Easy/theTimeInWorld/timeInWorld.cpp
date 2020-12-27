#include <bits/stdc++.h>
using namespace std;
void readNumber(string inp){
    string number[] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve"};
    string number1[] = {"x","ten","twenty"};
    cout << number1[inp[0] - '0'] + " " + number[inp[1]-'0'];
}
int main(){
    readNumber("29");
}