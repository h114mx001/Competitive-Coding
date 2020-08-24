#include <bits/stdc++.h>
using namespace std;
int whereIsIndex(vector <int> arr, int times, int index){
    int real_times;
    real_times = times % arr.size();
    if (index + real_times - 1>= arr.size()){
        index = index + real_times - arr.size() - 1;
    }
    else index = index + real_times - 1;
    return arr[index];
}
int main(){
    int size, rotate_times, queries = 0;
    int temp = 0;
    vector <int> arr;
    vector <int> queries_index;
    cin >> size >> rotate_times >> queries;
    for (int i = 0; i < size; i++){
        cin >> temp;
        arr.push_back(temp);
    }
    for (int i = 0; i < queries; i++){
        cin >> temp;
        cout << whereIsIndex(arr, rotate_times, temp) << endl;
    }
}
