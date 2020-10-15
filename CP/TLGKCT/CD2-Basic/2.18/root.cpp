#include <bits/stdc++.h>
#include "/home/soyo20/Desktop/Competitive-Coding/Library/bigNum.h"
using namespace std;
string numInput;
string hasRoot(){
    bool hasAnswer = false;
    int biggestValue = numInput.length()*9;
    int sumOfDigits = 0;
    string testNum = subBigNum(numInput, "1");
    for (int i = 1; i <= biggestValue; i++){
        for (int j = 0; j <= testNum.length(); j++){
            sumOfDigits += testNum[j] - '0';
        }
        if (addBigNum(testNum, to_string(sumOfDigits)) == numInput){
            hasAnswer = true;
            return testNum;
            break;
        }
        else{
            sumOfDigits = 0;
            addBigNum(testNum, "1");
        }
    }
    if (!hasAnswer){
        return "-1";
    }
}
int main(){ 
    cin >> numInput;
    cout << hasRoot();
}