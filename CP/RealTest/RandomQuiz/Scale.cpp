#include <bits/stdc++.h>
using namespace std;
string base = "012";
string dec2Ternary(int num){
    string res;
    while(num != 0){
        res += base[num%3];
        num/=3;
    }
    res = string(res.rbegin(), res.rend());
    return res;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("task.inp","r",stdin);
    freopen("task.out","w",stdout);
    int weight;
    cin >> weight;
    string toTer = dec2Ternary(weight);
    for (int i = 0; i < toTer.size(); i++){
        
    }
}