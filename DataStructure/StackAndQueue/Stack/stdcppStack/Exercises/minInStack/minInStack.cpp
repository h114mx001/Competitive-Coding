#include <bits/stdc++.h>
using namespace std;
std::vector<int> popMin(std::vector<int> arr)
{
    stack<int> st_min;
    vector<int> res;
    st_min.push(arr[0]);
    for (int i = 1; i < arr.size(); i++){
        if (arr[i] >= st_min.top()){
            st_min.push(st_min.top());
        }
        else st_min.push(arr[i]);
    }
    while(st_min.empty() == false){
        res.push_back(st_min.top());
        st_min.pop();
    }
    return res;
}   
int main(){
    vector <int> arr = {4, 2, 6, 7, 8, 1};
    for (int i = 0; i < arr.size(); i++){
        cout << popMin(arr)[i] << " ";
    }
}