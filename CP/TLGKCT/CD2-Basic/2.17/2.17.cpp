#include <bits/stdc++.h>
#include "/home/soyo20/Desktop/Competitive-Coding/Library/IOInit.h"
#include "/home/soyo20/Desktop/Competitive-Coding/Library/bigNum.h"
using namespace std;
int main(){
    IOInit();
    int n, k;
    cin >> k >> n;
    int number = 0;
    int res = 1;
    for (int i = 0; i <= k; i++){
        number = (n-i)*(n-i);
        res = res * number;
    }
    cout << res << endl;
}