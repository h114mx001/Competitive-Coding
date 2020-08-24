#include <bits/stdc++.h>
using namespace std;
char res_char;
int countValue(vector<char> arr){
    int num = 1;
    for (int i = 1; i < arr.size(); i++){
        if (arr[i] != arr[i-1]){
            ++num;
        }
    }
    return num;
}
int highestFrequency(vector<char> arr){
    int count, res;
    char temp_char;
    count = 0; 
    res = 0;
    for (int i = 1; i < arr.size(); i++){
        if (arr[i] != arr[i-1]){
            count = 1;
        }
        else ++count;
        if (count > res)
        {
            res = count;
        } 
    }
    return res;
}
int main(){
    string s;
    cin >> s;
    vector <char> arr;
    for (int i = 0; i < s.length(); i++){
        arr.push_back(s[i]);
    }   
    sort(arr.begin(), arr.end());
    cout << countValue(arr) << endl;
    cout << highestFrequency(arr) << " " << res_char << endl;
}