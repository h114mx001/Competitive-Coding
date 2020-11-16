#include <bits/stdc++.h>
using namespace std;
vector <int> digitArr;
void IOInit(){
    freopen("number.inp","r",stdin);
    freopen("number.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
}
void changeToArr(int num){
    int digits = 0;
    while (num != 0){
        digitArr.push_back(num % 10);
        num /= 10;
    }
}
int calcSteps(int num){
    int step = 0;
    while (num != 1){
        if (digitArr[0] != 1){
            while (digitArr[digitArr.size() - 1] != 1){
                digitArr[digitArr.size() - 1]--;
                step++;
            }
            swap(digitArr[0], digitArr[digitArr.size() - 1]);
        }
        else if (digitArr[0] == 1){
            while (digitArr[digitArr.size() - 1] != 0){
                digitArr[digitArr.size() - 1]--;
                step++;
            }
            for (int i = 0; i < digitArr.size(); i++){
                int place = 0;
                if (digitArr[i] != 1) place++;
                swap(digitArr[0],digitArr[i]);
            }
        }
    }
    return step;
}
int main(){
    int n;
    int num = 0;
    cin >> n;
    cout << calcSteps(2);

}