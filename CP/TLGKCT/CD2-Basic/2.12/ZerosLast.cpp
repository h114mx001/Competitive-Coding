#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("task.inp","r", stdin);
    freopen("task.out","w",stdout);
    unsigned long long int needCheck = 0;
    cin >> needCheck;
    unsigned long long int div2 = 1;
    unsigned long long int div5 = 1;
    unsigned long long int div10 = 1;
    unsigned long long int result = 0;
    unsigned long long int temp = 1;
    for (int i = 1; i <= needCheck; i++){
        if (i % 10 == 0){
            div10 = i;
        }
        else if (i % 2 == 0){
            div2 = i;
        }
        if (i % 5 == 0){
            div5 = i;
        }
        temp = div2*div5*div10;
        while (temp % 10 == 0){
            temp/=10;
            result++;
            div2 = 1;
            div5 = 1;
            div10 = 1;
        }
    }
    cout << result << endl;
}