#include <bits/stdc++.h>
using namespace std;
int arr[100];
int k;
void findTheKthElement(int arr[], int left, int right){
    if (left <= k && right >= k){
        int i = left, j = right;
        int pivot = arr[left + rand() % (right - left)];
        while (i <= j){
            while (arr[i] < pivot) ++i;
            while (arr[j] > pivot) --j;
            if (i <= j){
                swap(arr[i],arr[j]);
                ++i;
                --j;
            }
        }
        if (left < j) findTheKthElement(arr, left, j);
        if (i < right) findTheKthElement(arr, i, right);
    }
}
int main(){
    freopen("task.inp","r",stdin);
    int n;
    cin >> n >> k;
    k = k - 1;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    findTheKthElement(arr, 0, n-1);
    cout << arr[k];
}
