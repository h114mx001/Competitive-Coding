#include <bits/stdc++.h>
using namespace std;
int n;
int best, sum = 0;
int fstLoc, secLoc = 0;
int fstMaxLoc, secMaxLoc = 0;
void IOInit(){
    freopen("task.inp","r",stdin);
    freopen("task.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
}
void maximumSubArraySum(int arr[]){
    for (int i = 0; i < n; i++){
        if (arr[i] > (sum + arr[i])){
            fstLoc = i;
            secLoc = i;
            sum = arr[i];
        }
        else{
            secLoc++;
            sum+=arr[i];
        } 
        if (sum >= best){
            fstMaxLoc = fstLoc;
            secMaxLoc = secLoc;
            best = sum;
        }
        // sum = max(arr[i], sum + arr[i]);
        // best = max(best, sum);
    }
}
int main(){
    IOInit();
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    maximumSubArraySum(arr);
    for (int i = fstMaxLoc; i <= secMaxLoc; i++){
        cout << arr[i] << " ";
    }
    cout << "\n" << best;
}