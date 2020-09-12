#include <bits/stdc++.h>
using namespace std;
void primeFactorize(int n){
    int dem = 0;
    int i = 2;
    int number = n;
    int a[100];
    while (n > 1){
        if (n % i == 0){
            n/=i;
            a[dem++] = i;
        }
        else i++;
    }
    if (dem == 0){
        a[dem++] = n;
    }
    for (int i = 0; i < dem - 1; i++){
        cout << a[i] << "x";
    }
    cout << a[dem - 1];
}
int main(){
    primeFactorize(20);
}