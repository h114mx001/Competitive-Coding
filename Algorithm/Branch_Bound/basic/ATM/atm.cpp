#include <bits/stdc++.h>
using namespace std;
int listMoney[100];
int tryValue[100], bestValue[100];
int maxAtI[100];
int n;
int wantedMoney;
int sum, used, usedBest;
void input(){
    cin >> n >> wantedMoney; 
    for (int i = 1; i <= n; i++){
        cin >> listMoney[i]; 
    }
}
void init(){
    maxAtI[n] = listMoney[n];
    for (int i = n - 1; i >= 1; i--){
        maxAtI[i] = maxAtI[i+1];
        if (listMoney[i] > maxAtI[i]) maxAtI[i] = listMoney[i];
    }
    sum = 0;
    used = 0;
    usedBest = n + 1;
}
void update(){
    if (sum == wantedMoney && used < usedBest){
        copy(begin(tryValue),end(tryValue),begin(bestValue));
        usedBest = used;
    } 
}
void printResult(){
    if (usedBest < n + 1){
        cout << usedBest << endl;
        for (int i = 1; i <= n; i++){
            if (bestValue[i] == 1){
                cout << listMoney[i] << " ";
            }
        }
    }
    else cout << "-1";
}
void Attempt(int i){
    if (used + (wantedMoney - sum)/maxAtI[i] >= usedBest){
        return;
    }
    for (int j = 0; j <= 1; j++){
        tryValue[i] = j;
        sum+=tryValue[i]*listMoney[i];
        used+=j;
        if (i == n) update();
        else if (sum <= wantedMoney) Attempt(i+1);
        sum-=tryValue[i]*listMoney[i];
        used-=j;
    }
}
int main(){
    freopen("task.inp","r",stdin);
    freopen("task.out","w",stdout);
    input();
    init();
    Attempt(1);
    printResult();
}