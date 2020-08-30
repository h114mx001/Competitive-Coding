#include <bits/stdc++.h>
using namespace std;
int buocdi = 0;
void Move(int n, int x, int y){
    if (n == 1){
        cout << "Chuyen 1 dia tu " << x << " sang " << y << endl;
    }
    else
    {
        Move(n - 1, x, 6 - x - y);
        Move(1, x, y);
        Move(n - 1, 6 - x - y, y);
    }
}
int main(){
    int n; 
    cout << "Nhap so dia: ";
    cin >> n;
    Move(n, 1, 3);
    buocdi = pow(2,n) - 1;
    cout << "So buoc da di: " << buocdi << endl;
}