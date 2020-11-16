#include <bits/stdc++.h>
using namespace std;
#define alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
void IOInit(){
    freopen("task.inp","r",stdin);
    freopen("task.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
}
int main(){
    IOInit();
    int g, lengthS;
    cin >> g >> lengthS;
    string w, s;
    cin >> w;
    cin >> s;
    int charInQueue[64] = {0};
    int charInW[64] = {0};
    for (int i = 0; i < g; i++){
        charInW[int(w[i]) - 65]++;
    }
    queue<char> letterQueue;
    int matchCase = 0;
    for (int i = 0; i < lengthS; i++){
        charInQueue[int(s[i]) - 65]++;
        letterQueue.push(s[i]);
        if (charInQueue[int(s[i]) - 65] > charInW[int(s[i]) - 65]){
            while (charInQueue[int(s[i]) - 65] > charInW[int(s[i]) - 65])
            {
                charInQueue[int(letterQueue.front()) - 65]--;
                letterQueue.pop();
            }
        }

        if (letterQueue.size() == g){
            matchCase++;
            charInQueue[int(letterQueue.front()) - 65]--;
            letterQueue.pop();
        }
    }
    cout << matchCase;
}