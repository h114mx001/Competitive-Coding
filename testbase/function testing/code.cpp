#include <bits/stdc++.h>
using namespace std;
int main(){
    queue <int> A;
    for (int i = 1; i <= 4; i++){
        A.push(i);
    }
    A.pop();
    while (!A.empty()){
        cout << A.front() << endl;
        A.pop();
    }
}