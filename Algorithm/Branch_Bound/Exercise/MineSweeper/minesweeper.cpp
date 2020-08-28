#include <bits/stdc++.h>
using namespace std;
int markedMap[21][21], distroMap[21][21];
int hor[8] = {1,0,-1,-1,-1,0,1,1};
int ver[8] = {-1,-1,-1,0,1,1,1,0};
int m, n;
void input(){
    freopen("task.inp","r",stdin);
    cin >> m >> n;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            cin >> distroMap[i][j];
        }
    }
}
void output(){
    int count = 0;
    freopen("task.out","w",stdout);
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            cout << markedMap[i][j] << " ";
            if (markedMap[i][j] == 1) count++;
            if (j == n) cout << endl;
        }
    }
    cout << count;
}
int check_mine(int u, int v){
    int count = 0;
    for (int j = 0; j <= 7; j++){
        if((v+hor[j]>0)&&(v+hor[j]<=n)&&(u+ver[j]<=m)&&(u+ver[j]>0))
            if (markedMap[u+ver[j]][v+hor[j]]==1) count++;
    }
    return count;
}
bool possible(int i, int j){
    markedMap[i][j] = 0;
    int check1 = distroMap[i-1][j-1] - check_mine(i-1,j-1);
    if ((j < n)&&((check1 == 0) || (check1 == 1))){
        if (check1 == 0) markedMap[i][j] = 0;
        else markedMap[i][j] = 1;
        return false;
    }
    else if (j == n){
            int check2 = distroMap[i-1][j] - check_mine(i-1,j);
            if(((check1==0)||(check1==1))&&(check1==check2)){
                if (check1==0) markedMap[i][j]=0;
                else markedMap[i][j]=1;
                return false;
            }
            else return true;   
        }
    else return true;
}
bool continue_mine(int i){
    bool flag = false;
    int j = 1;
    while (!flag && j < n){
        j++;
        if (possible(i,j)) flag = true;
    }
    return flag;
}
void try_vertical(int i){
    for (int j = 0; j <= 1; j++){
        markedMap[i][1] = j;
        if (i > m) 
        {
            output();
            break;
        }
        else if (!continue_mine(i)) try_vertical(i+1); 
    }
}
void try_horizontal(int i){
    for (int j = 0; j <= 1; j++){
        markedMap[1][i] = j;
        if (i == n) try_vertical(2);
        else try_horizontal(i+1);
    }
}
int main(){
    input();
    try_horizontal(1);
}