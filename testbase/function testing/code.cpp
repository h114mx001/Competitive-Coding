#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp = 0;
    int result  = 0;
    cin >> temp;
    while (temp % 10 == 0){
            temp/=10;
            result++;
    }
    cout << result << endl;
}