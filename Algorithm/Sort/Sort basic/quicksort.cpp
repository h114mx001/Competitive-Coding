#include <bits/stdc++.h>
using namespace std;
int arr[10000];
void quicksort(int arr[], int left, int right){
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
    if (left < j) quicksort(arr,left,j);
    if (i < right) quicksort(arr,i,right);
}   
int main(){
    freopen("task.inp","r",stdin);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    clock_t start = clock();
    quicksort(arr,0,n-1);
    printf("Time: %.2fs\n", (double)(clock() - start)/CLOCKS_PER_SEC);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}