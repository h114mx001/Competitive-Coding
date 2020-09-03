#include <bits/stdc++.h>
using namespace std;
std::vector<int> transformArray(std::vector<int> arr, int k)
{
    vector<int> v;
    queue<int> q;
    for (int i = 0; i < arr.size(); i++){
        q.push(arr[i]);
    }
    int times = 1;
    while (times <= k){
        int first = q.front();
        q.pop();
        q.push(first);
        ++times;
    }
    while (!q.empty()){
        v.push_back(q.front());
        q.pop();
    }
    return v;
}
int main(){
    vector<int> vect = {1, 2, 6, 2, 4};
    for (int i = 0; i < transformArray(vect, 3).size(); i++){
        cout << transformArray(vect, 3)[i] << " ";
    }
}