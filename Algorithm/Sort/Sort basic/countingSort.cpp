#include <bits/stdc++.h>
using namespace std;
int n;
void countingSort(int arr[]){
    clock_t start = clock();
    int max = 0;
    int min = 10000;
    for (int i = 0; i < n; i++){
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    int result[10000];
    int size = max - min + 1;
    int frequent[size];
    fill_n(frequent,size,0);
    for (int i = 0; i < n; i++){
        frequent[arr[i] - min]++;
    }
    for (int i = 1; i < size; i++){
        frequent[i] += frequent[i-1];
    }
    for (int i = 0; i < n; i++){
        result[frequent[arr[i] - min] - 1] = arr[i];
        frequent[arr[i] - min]--;
    }
    printf("Time: %.2fs\n", (double)(clock() - start)/CLOCKS_PER_SEC);
    for (int i = 0; i < n; i++){
        cout << result[i] << " ";
    }

}
int main(){
    freopen("task.inp","r",stdin);
    cin >> n;
    int arr[10000];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    countingSort(arr);
}