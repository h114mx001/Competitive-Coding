#include <bits/stdc++.h>
using namespace std;
int banco[10][10] = {0};
int x_range[8] = {-2,-2,-1,-1,1,1,2,2};
int y_range[8] = {-1,1,-2,2,-2,2,-1,1};
int dem = 0;
int size = 0;
void printResult(){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout << banco[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void Movement(int x, int y){
    ++dem;
    banco[x][y] = dem;
    for (int i = 0; i < 8; i++){
        if (dem == size*size){
            printResult();
            exit(0);
        }
        int u = x + x_range[i];
        int v = y + y_range[i];
        if (u >= 0 && u < size && v >= 0 && v < size && banco[u][v] == 0){
            Movement(u,v);
        }
    }
    --dem;
    banco[x][y] = 0;
}
int main(){
    cin >> size;
    int x_location, y_location;
    cin >> x_location >> y_location;
    Movement(x_location,y_location);
}