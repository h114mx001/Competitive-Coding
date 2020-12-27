#include <bits/stdc++.h>
using namespace std;
void IOinit(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("task.inp","r",stdin);
}
int main(){
    IOinit();
    int n;
    cin >> n;
    vector <int> arr;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        arr.push_back(x);
    }
    arr.push_back(0);
    int Freq = 0;
    int nowFreq = 0;
    sort(arr.begin(),arr.end());
    for (int i = 0; i <= n; i++){
        if (arr[i] != arr[i+1]){
            if (Freq < nowFreq){
                Freq = nowFreq;
            }
            nowFreq = 1;
        }
        else nowFreq++;
    }
    cout << n - Freq;
}