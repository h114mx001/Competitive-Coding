#include <bits/stdc++.h> 
using namespace std;
void IOInit(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("task.inp","r",stdin);
}
int main(){
    IOInit();
    int n;
    int point = 0;
    cin >> n;
    vector <pair<int,int>> v;
    int dur, deadline;
    for (int i = 0; i < n; i++){
        cin >> dur >> deadline;
        v.push_back({dur, deadline});
    }
    sort(v.begin(), v.end());
    int duration = 0;
    for (int i = 0; i < v.size(); i++){
        duration += v[i].first;
        point += (v[i].second - duration); 
    }
    cout << point;
}