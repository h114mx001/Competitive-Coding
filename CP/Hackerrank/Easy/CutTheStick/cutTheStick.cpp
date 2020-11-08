#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int list[1000];
    freopen("task.inp","r",stdin);
    freopen("task.out","w",stdout);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> list[i];
    }

    sort(list,list+n);

    int sum = 0;
    for (int i = 0; i < n; i++){
        if (list[i] > 0){
            int minus = list[i];
            for (int j = i; j < n; j++){
                if (list[j] >= minus){
                    sum++;
                    list[j]-=minus;
                }
            }
            cout << sum << "\n";
            sum = 0;
        }
    }
}