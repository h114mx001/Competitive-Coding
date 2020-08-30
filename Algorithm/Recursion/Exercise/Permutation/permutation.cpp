#include <bits/stdc++.h>
using namespace std;
int permutation(int n, int k){
    if (k == 0 || k == n){
        return 1;
    }
    else return (permutation(n-1,k-1) + permutation(n-1,k));
}
int main(){
    int n, k;
    cin >> n >> k;
    cout << permutation(n,k);
}