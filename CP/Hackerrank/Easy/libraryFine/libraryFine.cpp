#include <bits/stdc++.h>
#include <chrono>
using namespace std;
int normalYear[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int leapYear[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
int theOrderOfDay(int d, int m, int y){
    int orderOfDay = 0;
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0){
        for (int i = 0; i < m - 1; i++){
            orderOfDay += leapYear[i];
        }
        orderOfDay += d;
    }
    else{
        for (int i = 0; i < m - 1; i++){
            orderOfDay += normalYear[i];
        }
        orderOfDay += d;         
    }
    return orderOfDay;
}
void IOInit(){
    freopen("task.inp","r",stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
}
int main(){
    IOInit();
    int d1,m1,y1,d2,m2,y2;
    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;
    int dayDiff = theOrderOfDay(d1,m1,y1) - theOrderOfDay(d2,m2,y2);
    if (y1 > y2){
        cout << 10000;
    }
    else if (m1 > m2){
        cout << dayDiff*500;
    }
    else if (d1 > d2){
        cout << dayDiff*15;
    }
    else cout << 0;
}