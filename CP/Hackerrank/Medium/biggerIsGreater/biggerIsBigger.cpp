// #include <bits/stdc++.h>
// using namespace std;
// void IOInit(){
//     freopen("task.inp","r",stdin);
// }
// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int t;
//     cin >> t;
//     string s;
//     string result;
//     for (int i = 1; i <= t; i++){
//         getline(cin,s);
//         int s1 = 0;
//         for (int j = 1; j < s.length(); j++){
//             if (s[j - 1] < s[j]){
//                 s1 = j;
//             }
//         }
//         int s2 = 0;
//         for (int j = s1; j < s.length(); j++){
//             if (s[s1] < s[j]) s2 = j;
//         }
//         swap(s[s1], s[s2]);
//         reverse(s1, s.end());
//     }
// }