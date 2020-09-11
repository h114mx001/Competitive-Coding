#include <bits/stdc++.h>
using namespace std;
std::string stackBin(int n)
{
    string s = "";
    stack<char> st;
    while (n > 0){
        if (n % 2 == 0){
            st.push('0');
        }
        else st.push('1');
        n/=2;
    }
    while(st.empty() == false){
        s += st.top();
        st.pop();
    }
    return s;
}
int main(){
    cout << stackBin(7);
}