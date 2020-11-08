#include <bits/stdc++.h>
using namespace std;
int main(){
    int p, d, m, s;
    cin >> p >> d >> m >> s;
    int boughtGames = 0;
    while (s >= p){
        s-=p;
        if (p - d >= m){
            p-=d;
        }
        else p = m;
        boughtGames++;
    }
    cout << boughtGames << endl;
}