#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("task.inp","r",stdin);
    string s;
    cin >> s;
    vector <string> arr;
    int res = 1;
    char storage[200];
    for (int i = 0; i < s.length(); i++){
        for (int j = i; j < s.length(); j++){
            size_t length = s.copy(storage,j - i + 1, i);
            storage[length] = '\0';
            arr.push_back(storage);
        }
    }
    sort(arr.begin(),arr.end());
    for (int i = 1; i < arr.size(); i++){
        if (arr[i] != arr[i-1]){
            ++res;
        }
    }
    cout << res;
}