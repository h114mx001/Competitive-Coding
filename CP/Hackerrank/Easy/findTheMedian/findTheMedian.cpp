#include <bits/stdc++.h>
using namespace std;
vector <int> arr;
int findTheMedian(){
    sort(arr.begin(),arr.end());
    return arr[arr.size() / 2];
}
int main(){
    int n;
    int temp;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        arr.push_back(temp);
    }
    cout << findTheMedian();
}