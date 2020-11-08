#include <bits/stdc++.h>
using namespace std;
void IOInit(){
    freopen("task.inp","r",stdin);
    freopen("task.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
}
int main(){
    IOInit();
    int n;
    cin >> n;
    int arr1[n];
    int arr2[n];
    for (int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++){
        cin >> arr2[i];
    }
    sort(arr1, arr1+n);
    sort(arr2, arr2+n);
    int smallestVal = -1;
    int left = 0;
    int right = n - 1;
    while (left <= n - 1 || right >= 0|| smallestVal != 0){
        smallestVal = arr2[right] + arr1[left];
        if (smallestVal < 0 && left < n - 1) left++;
            else if (smallestVal > 0 && right > 0) right--;
                else break;
    }
    cout << smallestVal << endl;
}