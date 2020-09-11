#include <bits/stdc++.h>
using namespace std;
std::vector<int> messagesPhone(std::vector<int> a, int k)
{
    vector <bool> checked(1001, false);
    vector <int> after;
    queue<int> number;
    for (int i = 0; i < a.size(); i++){
        if (!checked[a[i]]){
            if (number.size() == k){
                checked[number.front()] = false;
                number.pop();
                number.push(a[i]);
                checked[a[i]] = true;
            }
            else{
                number.push(a[i]);
                checked[a[i]] = true;
            }
        }
    }
    while (!number.empty()){
        after.push_back(number.front());
        number.pop();
    }
    return after;
}
int main(){
    vector <int> number = {4,6,8,1,7,5,8};
    vector <int> messages = messagesPhone(number,5);
    for (int i = 0; i < messages.size(); i++){
        cout << messages[i] << " ";
    }
}