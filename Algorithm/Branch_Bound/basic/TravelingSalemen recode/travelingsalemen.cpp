#include <bits/stdc++.h>
using namespace std;
int costMap[100][100];
int tryCases[101], bestCases[101];
int cost[101];
int freeCity[100];
int cities, roads;
int minSpend;
void enter(){
    int x, y;
    cin >> cities >> roads;
    for (int i = 1; i <= cities; i++){
        for (int j = 1; j <= cities; j++){
            if (i == j) costMap[i][j] = 0; else costMap[i][j] = 999999;
        }
    }
    for (int i = 1; i <= roads; i++){
        cin >> x >> y >> costMap[x][y];
        costMap[y][x] = costMap[x][y];
    }
}
void init(){
    for (int i = 1; i <= cities; i++) freeCity[i] = true;
    freeCity[1] = false;
    tryCases[1] = 1;
    cost[1] = 0;
    minSpend = 999999;
}
void Attempt(int i){
    for (int j = 2; j <= cities; j++){
        if (freeCity[j]){
            tryCases[i] = j;
            cost[i] = cost[i-1] + costMap[tryCases[i - 1]][j];
            if (cost[i] < minSpend){
                if (i < cities){
                    freeCity[j] = false;
                    Attempt(i+1);
                    freeCity[j] = true; 
                }
                else 
                    if (cost[cities] + costMap[tryCases[cities]][1] < minSpend){
                        copy(begin(tryCases),end(tryCases),begin(bestCases));
                        minSpend = cost[cities] + costMap[tryCases[cities]][1];
                    }
            }
        }
    }
}   
void printResult(){
    for (int i = 1; i <= cities; i++){
        cout << bestCases[i] << "->";
    }
    cout << "1" << endl;
    cout << "Costs: " << minSpend;
}
int main(){
    freopen("task.inp","r",stdin);
    freopen("task.out","w",stdout);
    enter();
    init();
    Attempt(2);
    printResult();
}