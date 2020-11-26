    #include <bits/stdc++.h>
    using namespace std;
    void IOInit(){
        freopen("task.inp","r",stdin);
        freopen("task.out","w",stdout);
    }
    int maximumVehicle(int arr[], int startIndex, int endIndex){
        int result = 999999;
        for (int j = startIndex; j <= endIndex; j++){
            result = min(result, arr[j]);
        }
        return result;
    }
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        IOInit();
        int n, t;
        cin >> n >> t;
        int laneMap[n];
        for (int i = 0; i < n; i++){
            cin >> laneMap[i];
        }
        int startIndex, endIndex;
        for (int i = 1; i <= t; i++){
            cin >> startIndex >> endIndex;
            cout << maximumVehicle(laneMap, startIndex, endIndex) << "\n";
        }
    }