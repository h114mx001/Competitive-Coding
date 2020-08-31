#include <bits/stdc++.h>
using namespace std;
int main(){
    int bien1 = 10;
    int *pointer;
    pointer = &bien1; //Luu dia chi cua bien1 vao pointer
    cout << "bien1 = " << bien1 << endl;
    cout << "dia chi cua bien1 dc luu trong pointer la: " << pointer << endl;
    cout << "Gia tri cua *pointer la: " << *pointer << endl; //*pointer giup lay gia tri cua bien co dia chi dc luu trong pointer
}