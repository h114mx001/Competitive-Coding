#include <bits/stdc++.h>
using namespace std;
int arr[100];
int i = 0;
int x = 0;
void quicksort(int l, int r){
    int i = l, j = r;
    int pivot = l + rand() % (r - l);
    while (i <= j){
        while (arr[i] < arr[pivot]) ++i;
        while (arr[j] > arr[pivot]) --j;
        if (i <= j){
            swap(arr[i], arr[j]);
            ++i;--j;
        }
    }
    if (l < j) quicksort(l,j);
    if (i < r) quicksort(i,r);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("unknown.txt","r",stdin);
    while (cin >> x){
        arr[i] = x;
        i++;
    }
    quicksort(0,i-1);
    for (int k = 0; k < i; k++){
        cout << arr[k] << " ";
    }
}