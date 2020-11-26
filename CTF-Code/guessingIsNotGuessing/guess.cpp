#include <bits/stdc++.h>
#include "/home/h114mx001/Desktop/Competitive-Coding/Library/bigNum.h"
using namespace std;
int main(){
    string int1 = "0";
    string int2 = "18446744073709551616";
    char canCont = ' ';
    while (canCont != 'e'){
        string s = divBigvsSmall(addBigNum(int1, int2),2);
        cout << s << "\n";
        cout << "l/h?: ";
        cin >> canCont;
        if (canCont == 'l'){
            int1 = s; 
        }
        else if (canCont == 'h'){
            int2 = s;
        }
    }
}