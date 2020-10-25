#include <bits/stdc++.h>
using namespace std;
void IOInit(){
    freopen("task.inp","r",stdin);
    freopen("task.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
}
typedef struct{
    int firstPoint;
    int length;
} Points;
void quicksort(Points arr[], int left, int right){
    int i = left, j = right;
    int pivot = arr[left + rand() % (right - left)].firstPoint;
    while (i <= j){
        while (arr[i].firstPoint < pivot) ++i;
        while (arr[j].firstPoint > pivot) --j;
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
    IOInit();
    Points listPoints[10000];
    int n;
    int res = 0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> listPoints[i].firstPoint >> listPoints[i].length;
    }
    quicksort(listPoints, 1, n);
    listPoints[0].firstPoint = -1000000000;
    for (int i = 1; i <= n; i++){
        cout << listPoints[i].firstPoint << " " << listPoints[i].length << "\n";
    }
    for (int i = 1; i <= n; i++){
        if (listPoints[i-1].firstPoint <= listPoints[i].firstPoint){
            listPoints[i].firstPoint += listPoints[i].length;
            res+= listPoints[i].length;
        }
        else{
            listPoints[i].firstPoint = listPoints[i-1].firstPoint;
            res+=(listPoints[i].length - listPoints[i].firstPoint);
        }
    }
    cout << res << "\n";
}