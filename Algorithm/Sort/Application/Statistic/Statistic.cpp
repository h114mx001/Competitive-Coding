#include <bits/stdc++.h>
using namespace std;
int n;
int countValue(int arr[]){
    int num = 1;
    for (int i = 1; i < n; i++){
        if (arr[i] != arr[i-1]){
            ++num;
        }
    }
    return num;
}
int highestFrequency(int arr[]){
    int count, res;
    count =0; 
    res = 0;
    for (int i = 1; i < n; i++){
        if (arr[i] != arr[i-1]){
            count = 1;
        }
        else ++count;
        if (count > res) res = count;
    }
    return res;
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
        if (i < right) quickSort(arr, i ,right);
    }    
}
int main(){
    freopen("task.inp","r",stdin);
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    quickSort(arr, 0, n-1);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Different values: " << countValue(arr) << endl;
    cout << "Highest frequency: " << highestFrequency(arr);
}