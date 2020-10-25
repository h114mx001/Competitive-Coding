#include <bits/stdc++.h>
using namespace std;
void IOInit(){
    freopen("task.inp","r",stdin);
    freopen("task.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
}
bool CompareAandB(string a, string b){
    string s1 = a + b;
    string s2 = b + a;
    if(s1 < s2) return true; else return false;
}
void quicksort(string arr[], int left, int right){
    int i = left, j = right;
    string pivot = arr[left + rand() % (right - left)];
    while (i <= j){
        while ((arr[i] + pivot) < (pivot + arr[i])) ++i;
        while ((arr[j] + pivot) > (pivot + arr[j])) --j;
        if (i <= j){
            swap(arr[i],arr[j]);
            ++i;
            --j;
        }
    }
    if (left < j) quicksort(arr,left,j);
    if (i < right) quicksort(arr,i,right);
}   
int main(){
    string sArr[100];
    int t;
    IOInit();
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> t;
        sArr[i] = to_string(t);
    }
    quicksort(sArr, 0 , n - 1);
    for (int i = n - 1; i >= 0; i--){
        cout << sArr[i];
    }
}