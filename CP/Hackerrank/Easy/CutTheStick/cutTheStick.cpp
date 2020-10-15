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
        while (list[i] > 0){
            int j = i;
            sum = n - j;
            int sub = list[j];
        } 
        for (int k = j; k < n; k++){
                list[k]-=sub;
                if (list[k] > 0) sum--;
            }
        cout << sum << endl;
    }
}