#include <bits/stdc++.h>
using namespace std;
void loop(stack <char> &ms, string str, int num){
    for (int i = 1; i <= num; i++){
        for (auto x: str){
            ms.push(x);
        }
    }
}
void showstack(stack <char> s) 
{ 
    while (!s.empty()) 
    { 
        cout << '\t' << s.top(); 
        s.pop(); 
    } 
    cout << '\n'; 
} 
std::string decodeString(std::string s)
{
    stack <char> ms;
    for (auto x : s)
    {
        if (x == ']')
        { 
            string chr;
            string ans = "";
            int num = 0, base = 1;
            while (ms.top() != '[')
            {
                chr = ms.top();
                ms.pop();
                ans = chr + ans;
            }
            ms.pop();
            while (!ms.empty() && '0' <= ms.top() && ms.top() <= '9')
            {
                num += (ms.top() - '0')*base;
                base *= 10;
                ms.pop();
            }
            loop(ms, ans, num);
            showstack(ms);
        }
        else
            ms.push(x);
    }
    string res = "";
    while(!ms.empty())
	{
		char x = ms.top();
    	res.push_back(x);
    	ms.pop();
	}
	reverse(res.begin(), res.end());
    return res;
}
int main(){
    cout << decodeString("3[b2[ca]]");
}