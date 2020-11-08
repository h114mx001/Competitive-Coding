#include <bits/stdc++.h>
using namespace std;
void IOInit(){
    freopen("task.inp","r",stdin);
    freopen("task.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
}
int main(){
    IOInit();
    int n;
    int times[10000];
    int resPoint;
    int timesResPoint;
    int firstPoint, secondPoint;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> firstPoint >> secondPoint;
        for (int j = firstPoint; j <= secondPoint; j++){
            times[j]++;
            if (times[j] > timesResPoint){
                timesResPoint = times[j];
                resPoint = j;
            }
        }
    }
    cout << resPoint;
}