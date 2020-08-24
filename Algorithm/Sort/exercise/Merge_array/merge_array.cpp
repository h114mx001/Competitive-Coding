#include <bits/stdc++.h>
using namespace std;
vector <int> answer;
int length_arr1, length_arr2;
int main(){
    freopen("task.inp","r",stdin);
    cin >> length_arr1 >> length_arr2;
    int arr1[100];
    int arr2[100];
    for (int i = 0; i < length_arr1; i++){
        cin >> arr1[i];
    }
    for (int i = 0; i < length_arr2; i++){
        cin >> arr2[i];
    }
    int i,j = 0;
    while (i < length_arr1 && j < length_arr2){
        if (arr1[i] < arr2[j]){
            answer.push_back(arr1[i]);
            ++i;
        }
        else{
            answer.push_back(arr2[j]);
            ++j;
        }
    }
    for (int i = 0; i < answer.size(); i++){
        cout << answer[i] << " ";
    }
}