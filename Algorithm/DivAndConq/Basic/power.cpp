#include <bits/stdc++.h>
using namespace std;
long long int powr(long int a, long int n){
    if (n == 1) return a;
    long long int tmp = powr(a, n/2);
    if (n % 2 == 0){
        return tmp*tmp;
    }
    else return tmp*tmp*a;
}
int main(){
    cout << powr(2,50) << endl;
}