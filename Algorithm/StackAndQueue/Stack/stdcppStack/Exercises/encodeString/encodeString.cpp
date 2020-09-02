#include <bits/stdc++.h>
using namespace std;
string encodeString(string s)
{   
    s+='!';
    string res;
    stack <char> st;
    for (int i = 0; i < s.length(); i++){
        if (st.empty() || st.top() == s[i]){
            st.push(s[i]);
        }
        else{
            int count = 0;
            res += st.top();
            while (!st.empty()){
                ++count;
                st.pop();
            }
            res += to_string(count);
            st.push(s[i]);
            count = 1;
        }
    }
    return res;
}
int main(){
    cout << encodeString("aaabbcca");
}