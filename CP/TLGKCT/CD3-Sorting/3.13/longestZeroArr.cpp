#include<bits/stdc++.h>
#define moveLeft() sumArr = sumArr - arr[left]; left++;
#define moveRight() sumArr = sumArr - arr[right]; right--;
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
    int sumArr = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        sumArr+=arr[i];
    }
    int left = 0;
    int right = n - 1;
    while (sumArr != 0){
        if (sumArr > 0){
            if (abs(arr[left]) < abs(arr[right])){
                moveRight();
            }
            else moveLeft();
        }
        else{
            if (abs(arr[left]) < abs(arr[right])){
                moveLeft();
            }
            else moveRight();
        }
    }
    for (int i = left; i <= right; i++){
        cout << arr[i] << " ";
    }
}