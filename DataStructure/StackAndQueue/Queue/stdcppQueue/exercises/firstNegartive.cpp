#include <bits/stdc++.h>
using namespace std;
vector<int> firstNegative(vector<int> a, int k)
{
    queue<int> indexQueue;
    for (int i = 0; i < k - 1; i++){
        if (a[i] < 0) indexQueue.push(i);
    }
    vector <int> res;
    for (int i = k - 1; i < a.size(); i++){
        if (a[i] < 0) indexQueue.push(i);
        if (!indexQueue.empty() && indexQueue.front() < i - k + 1){
            indexQueue.pop();
        }
        res.push_back(indexQueue.empty() ? 0 : a[indexQueue.front()]);
    }
    return res;
}
int main(){
    vector <int> a = {-8, 2, 3, -6, 10};
    vector <int> vect = firstNegative(a, 2);
    for (int i = 0; i < vect.size(); i++){
        cout << vect[i] << " ";
    }
}