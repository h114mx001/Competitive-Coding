#include <bits/stdc++.h>
using namespace std;
long long factorialModuloM(int i, long long m){
    long long x = 1;
    for (int j = 2; j <= i; j++){
        x = (x*i)%m;
    }
    return x;
}
int ensureNoMinusModulo(int x, int m){
    x %= m;
    if (x < 0) x +=m;
    return x;
}
int main(){
    long long x = 1234567890123456789LL; //LL suffix is long long
    int a = 123456789;
    double d = 0.232432432;
    long long b = (long long)a*a; //casting a int => long long
    printf("%.9f\n", d); //print the double with 9 decimal places
    cout << ensureNoMinusModulo(-123,4) << "\n";
    
}