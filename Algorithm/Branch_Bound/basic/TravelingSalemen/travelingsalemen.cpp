#include <bits/stdc++.h>
using namespace std;
int cities = 50;
int roads = 50;
int costsMap[100][100];//create a costsMap vector contain n vectors size m = 0
int tryValue[100], bestWay[100];
int cost[100];
bool freeCity[100];
int x,y;
int minSpend;
void enter(){
    cin >> cities >> roads;
    for (int i = 1; i <= cities; i++){
        for (int j = 1; j <= cities; j++){
            if (i == j) costsMap[i][j] = 0;
            else costsMap[i][j] = 999999;
        }
    }
    for (int i = 1; i <= roads; i++){
        int temp;
        cin >> x >> y >> temp;
        costsMap[x][y] = temp;
        costsMap[y][x] = costsMap[x][y];
    }
}
void init(){
    for (int i = 1; i<=cities; i++) freeCity[i] = true;
    freeCity[1] = false;
    tryValue[1] = 1;
    cost[1] = 0;
    minSpend = 999999;
}
void Attempt(int i){
    for (int j = 2; j <= cities; j++){
        if (freeCity[j]){
            tryValue[i] = j;
            cost[i] = cost[i - 1] + costsMap[tryValue[i-1]][j];
            if (cost[i] < minSpend){
                if (i < cities){
                    freeCity[j] = false;
                    Attempt(i+1);
                    freeCity[j] = true;
                }
                else 
                    if (cost[cities] + costsMap[tryValue[cities]][1] < minSpend){
                        copy(begin(tryValue),end(tryValue),begin(bestWay));
                        minSpend = cost[cities] + costsMap[tryValue[cities]][1];
                    }
            }
        }
    }
}
void printResult(){
    if (minSpend == 999999){
        cout << "NO SOLUTION";
    }
    else for (int i = 1; i <= cities; i++){
        cout << bestWay[i] << "->";
    }
    cout << "1" << endl;
    cout << "Cost: " << minSpend;
}
int main(){
    freopen("task.inp","r",stdin);
    freopen("task.out","w",stdout);
    enter();
    init();
    Attempt(2);
    printResult();
}