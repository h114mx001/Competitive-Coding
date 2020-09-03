#include <bits/stdc++.h>
using namespace std;
string character = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string dec2any(int n, int base){
    string res = "";
    stack <char> st;
    while (n > 0){
        st.push(character[n % base]);
        n/=base;
    }
    while (!st.empty()){
        res += st.top();
        st.pop();
    }
    return res;
}
int main(){
    cout << dec2any(100,17);
}