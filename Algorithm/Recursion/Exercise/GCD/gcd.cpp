#include <bits/stdc++.h>
using namespace std;
int GCD(int x, int y){
    if (y == 0){ //anchor
        return x;
    }
    else return GCD(y, x % y); //recursion
}
int main(){
    int x, y;
    cin >> x >> y;
    cout << "GCD(" << x << "," << y << ")= " << GCD(x,y);
}