#include <bits/stdc++.h>
using namespace std;
int findValues(long int i){
    int remainders;
    int number = i;
    int res = 0;
    while (number != 0){
        remainders = number % 10;
        number /= 10;
        if (remainders != 0){
            if (i % remainders == 0) ++res;
        }
    }
    return res;
}
int main(){
    int cases, number;
    cin >> cases;
    for (int i = 1; i <= cases; i++){
        cin >> number;
        cout << findValues(number) << endl;
    }
}