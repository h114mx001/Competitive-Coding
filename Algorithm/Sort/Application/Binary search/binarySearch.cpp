#include <bits/stdc++.h>
using namespace std;
int arr[100];
int binarySearch(int arr[], int n, int index){
    int left = 0;
    int right = n - 1;
    int mid;
    while (left <= right){
        mid = (left + right) / 2;
        if (arr[mid] == index){
            return mid;
        }
        if (arr[mid] < index){
            left = mid + 1;
        }
        else right = mid - 1;
    }
    return -1;
}
void quickSort(int arr[], int left, int right){
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
        if (left < j) quickSort(arr, left, j);
        if (i < right) quickSort(arr, i, right);
    }
}
int main(){
    freopen("task.inp","r",stdin);
    int index;
    int n;
    cin >> n >> index;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);
    cout << binarySearch(arr, n, index);
}